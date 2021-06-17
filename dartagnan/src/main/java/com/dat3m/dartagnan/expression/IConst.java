package com.dat3m.dartagnan.expression;

import com.dat3m.dartagnan.expression.processing.ExpressionVisitor;
import com.google.common.collect.ImmutableSet;
import com.microsoft.z3.Context;
import com.microsoft.z3.Expr;
import com.microsoft.z3.Model;

import com.dat3m.dartagnan.program.Register;
import com.dat3m.dartagnan.program.event.Event;

import java.math.BigInteger;

public class IConst extends IExpr implements ExprInterface {

	// TODO(TH): not sure where this are used, but why do you set the precision to 0?
	// TH: This was a temporary try for integer logic only
	// However, it is impossible to define general constants, we need a function that produces
	// a constant for each precision degree
	// HP: agree. I assume you wanted this to improve code readability, but having one constant per precition won't help.
	public static IConst ZERO = new IConst(BigInteger.ZERO, -1);
	public static IConst ONE = new IConst(BigInteger.ONE, -1);

	private final BigInteger value;
	protected final int precision;
	
	public IConst(BigInteger value, int precision) {
		this.value = value;
		this.precision = precision;
	}

	public IConst(String value, int precision) {
		this.value = new BigInteger(value);
		this.precision = precision;
	}

	@Override
	public Expr toZ3Int(Event e, Context ctx) {
		return precision > 0 ? ctx.mkBV(value.toString(), precision) : ctx.mkInt(value.toString());
	}

	@Override
	public ImmutableSet<Register> getRegs() {
		return ImmutableSet.of();
	}

	@Override
	public String toString() {
		return value.toString();
	}

	@Override
	public Expr getLastValueExpr(Context ctx){
		return precision > 0 ? ctx.mkBV(value.toString(), precision) : ctx.mkInt(value.toString());
	}

	@Override
	public BigInteger getIntValue(Event e, Model model, Context ctx){
		return value;
	}

	public BigInteger getIntValue() {
		return value;
	}

    public Expr toZ3Int(Context ctx) {
		return precision > 0 ? ctx.mkBV(value.toString(), precision) : ctx.mkInt(value.toString());
    }

	@Override
	public IConst reduce() {
		return this;
	}
	
	public BigInteger getValue() {
		return value;
	}

    
	@Override
	public int getPrecision() {
    	return precision;
    }

	@Override
	public <T> T visit(ExpressionVisitor<T> visitor) {
		return visitor.visit(this);
	}

	@Override
	public int hashCode() {
		return precision > 0 ? value.hashCode() : value.hashCode() + precision;
	}

	@Override
	public boolean equals(Object obj) {
		if (obj == this) {
			return true;
		}
		if (obj == null || obj.getClass() != getClass())
			return false;
		IConst expr = (IConst) obj;
		return expr.value.equals(value) && expr.precision == precision;
	}
	public String AsmToC() { return String.valueOf(value); }

	@Override
	public String AsmToCAssert() { return AsmToC();}
}
