// Basic types
type i1 = int;
type i5 = int;
type i6 = int;
type i8 = int;
type i16 = int;
type i24 = int;
type i32 = int;
type i40 = int;
type i48 = int;
type i56 = int;
type i64 = int;
type i80 = int;
type i88 = int;
type i96 = int;
type i128 = int;
type i160 = int;
type i256 = int;
type ref = i64;
type float;

// Basic constants
const $0: i32;
axiom ($0 == 0);
const $1: i32;
axiom ($1 == 1);
const $0.ref: ref;
axiom ($0.ref == 0);
const $1.ref: ref;
axiom ($1.ref == 1);
const $1024.ref: ref;
axiom ($1024.ref == 1024);
// Memory model constants
const $GLOBALS_BOTTOM: ref;
const $EXTERNS_BOTTOM: ref;
const $MALLOC_TOP: ref;

// Memory maps (2 regions)
var $M.0: ref;
var $M.1: i32;

// Memory address bounds
axiom ($GLOBALS_BOTTOM == $sub.ref(0, 47475));
axiom ($EXTERNS_BOTTOM == $add.ref($GLOBALS_BOTTOM, $sub.ref(0, 32768)));
axiom ($MALLOC_TOP == 9223372036854775807);
function {:inline} $isExternal(p: ref) returns (bool) { $slt.ref.bool(p, $EXTERNS_BOTTOM) }

// SMT bit-vector/integer conversion
function {:builtin "(_ int2bv 64)"} $int2bv.64(i: i64) returns (bv64);
function {:builtin "bv2nat"} $bv2int.64(i: bv64) returns (i64);

// Integer arithmetic operations
function {:inline} $add.i1(i1: i1, i2: i1) returns (i1) { (i1 + i2) }
function {:inline} $add.i5(i1: i5, i2: i5) returns (i5) { (i1 + i2) }
function {:inline} $add.i6(i1: i6, i2: i6) returns (i6) { (i1 + i2) }
function {:inline} $add.i8(i1: i8, i2: i8) returns (i8) { (i1 + i2) }
function {:inline} $add.i16(i1: i16, i2: i16) returns (i16) { (i1 + i2) }
function {:inline} $add.i24(i1: i24, i2: i24) returns (i24) { (i1 + i2) }
function {:inline} $add.i32(i1: i32, i2: i32) returns (i32) { (i1 + i2) }
function {:inline} $add.i40(i1: i40, i2: i40) returns (i40) { (i1 + i2) }
function {:inline} $add.i48(i1: i48, i2: i48) returns (i48) { (i1 + i2) }
function {:inline} $add.i56(i1: i56, i2: i56) returns (i56) { (i1 + i2) }
function {:inline} $add.i64(i1: i64, i2: i64) returns (i64) { (i1 + i2) }
function {:inline} $add.i80(i1: i80, i2: i80) returns (i80) { (i1 + i2) }
function {:inline} $add.i88(i1: i88, i2: i88) returns (i88) { (i1 + i2) }
function {:inline} $add.i96(i1: i96, i2: i96) returns (i96) { (i1 + i2) }
function {:inline} $add.i128(i1: i128, i2: i128) returns (i128) { (i1 + i2) }
function {:inline} $add.i160(i1: i160, i2: i160) returns (i160) { (i1 + i2) }
function {:inline} $add.i256(i1: i256, i2: i256) returns (i256) { (i1 + i2) }
function {:inline} $sub.i1(i1: i1, i2: i1) returns (i1) { (i1 - i2) }
function {:inline} $sub.i5(i1: i5, i2: i5) returns (i5) { (i1 - i2) }
function {:inline} $sub.i6(i1: i6, i2: i6) returns (i6) { (i1 - i2) }
function {:inline} $sub.i8(i1: i8, i2: i8) returns (i8) { (i1 - i2) }
function {:inline} $sub.i16(i1: i16, i2: i16) returns (i16) { (i1 - i2) }
function {:inline} $sub.i24(i1: i24, i2: i24) returns (i24) { (i1 - i2) }
function {:inline} $sub.i32(i1: i32, i2: i32) returns (i32) { (i1 - i2) }
function {:inline} $sub.i40(i1: i40, i2: i40) returns (i40) { (i1 - i2) }
function {:inline} $sub.i48(i1: i48, i2: i48) returns (i48) { (i1 - i2) }
function {:inline} $sub.i56(i1: i56, i2: i56) returns (i56) { (i1 - i2) }
function {:inline} $sub.i64(i1: i64, i2: i64) returns (i64) { (i1 - i2) }
function {:inline} $sub.i80(i1: i80, i2: i80) returns (i80) { (i1 - i2) }
function {:inline} $sub.i88(i1: i88, i2: i88) returns (i88) { (i1 - i2) }
function {:inline} $sub.i96(i1: i96, i2: i96) returns (i96) { (i1 - i2) }
function {:inline} $sub.i128(i1: i128, i2: i128) returns (i128) { (i1 - i2) }
function {:inline} $sub.i160(i1: i160, i2: i160) returns (i160) { (i1 - i2) }
function {:inline} $sub.i256(i1: i256, i2: i256) returns (i256) { (i1 - i2) }
function {:inline} $mul.i1(i1: i1, i2: i1) returns (i1) { (i1 * i2) }
function {:inline} $mul.i5(i1: i5, i2: i5) returns (i5) { (i1 * i2) }
function {:inline} $mul.i6(i1: i6, i2: i6) returns (i6) { (i1 * i2) }
function {:inline} $mul.i8(i1: i8, i2: i8) returns (i8) { (i1 * i2) }
function {:inline} $mul.i16(i1: i16, i2: i16) returns (i16) { (i1 * i2) }
function {:inline} $mul.i24(i1: i24, i2: i24) returns (i24) { (i1 * i2) }
function {:inline} $mul.i32(i1: i32, i2: i32) returns (i32) { (i1 * i2) }
function {:inline} $mul.i40(i1: i40, i2: i40) returns (i40) { (i1 * i2) }
function {:inline} $mul.i48(i1: i48, i2: i48) returns (i48) { (i1 * i2) }
function {:inline} $mul.i56(i1: i56, i2: i56) returns (i56) { (i1 * i2) }
function {:inline} $mul.i64(i1: i64, i2: i64) returns (i64) { (i1 * i2) }
function {:inline} $mul.i80(i1: i80, i2: i80) returns (i80) { (i1 * i2) }
function {:inline} $mul.i88(i1: i88, i2: i88) returns (i88) { (i1 * i2) }
function {:inline} $mul.i96(i1: i96, i2: i96) returns (i96) { (i1 * i2) }
function {:inline} $mul.i128(i1: i128, i2: i128) returns (i128) { (i1 * i2) }
function {:inline} $mul.i160(i1: i160, i2: i160) returns (i160) { (i1 * i2) }
function {:inline} $mul.i256(i1: i256, i2: i256) returns (i256) { (i1 * i2) }
function {:builtin "div"} $sdiv.i1(i1: i1, i2: i1) returns (i1);
function {:builtin "div"} $sdiv.i5(i1: i5, i2: i5) returns (i5);
function {:builtin "div"} $sdiv.i6(i1: i6, i2: i6) returns (i6);
function {:builtin "div"} $sdiv.i8(i1: i8, i2: i8) returns (i8);
function {:builtin "div"} $sdiv.i16(i1: i16, i2: i16) returns (i16);
function {:builtin "div"} $sdiv.i24(i1: i24, i2: i24) returns (i24);
function {:builtin "div"} $sdiv.i32(i1: i32, i2: i32) returns (i32);
function {:builtin "div"} $sdiv.i40(i1: i40, i2: i40) returns (i40);
function {:builtin "div"} $sdiv.i48(i1: i48, i2: i48) returns (i48);
function {:builtin "div"} $sdiv.i56(i1: i56, i2: i56) returns (i56);
function {:builtin "div"} $sdiv.i64(i1: i64, i2: i64) returns (i64);
function {:builtin "div"} $sdiv.i80(i1: i80, i2: i80) returns (i80);
function {:builtin "div"} $sdiv.i88(i1: i88, i2: i88) returns (i88);
function {:builtin "div"} $sdiv.i96(i1: i96, i2: i96) returns (i96);
function {:builtin "div"} $sdiv.i128(i1: i128, i2: i128) returns (i128);
function {:builtin "div"} $sdiv.i160(i1: i160, i2: i160) returns (i160);
function {:builtin "div"} $sdiv.i256(i1: i256, i2: i256) returns (i256);
function {:builtin "mod"} $smod.i1(i1: i1, i2: i1) returns (i1);
function {:builtin "mod"} $smod.i5(i1: i5, i2: i5) returns (i5);
function {:builtin "mod"} $smod.i6(i1: i6, i2: i6) returns (i6);
function {:builtin "mod"} $smod.i8(i1: i8, i2: i8) returns (i8);
function {:builtin "mod"} $smod.i16(i1: i16, i2: i16) returns (i16);
function {:builtin "mod"} $smod.i24(i1: i24, i2: i24) returns (i24);
function {:builtin "mod"} $smod.i32(i1: i32, i2: i32) returns (i32);
function {:builtin "mod"} $smod.i40(i1: i40, i2: i40) returns (i40);
function {:builtin "mod"} $smod.i48(i1: i48, i2: i48) returns (i48);
function {:builtin "mod"} $smod.i56(i1: i56, i2: i56) returns (i56);
function {:builtin "mod"} $smod.i64(i1: i64, i2: i64) returns (i64);
function {:builtin "mod"} $smod.i80(i1: i80, i2: i80) returns (i80);
function {:builtin "mod"} $smod.i88(i1: i88, i2: i88) returns (i88);
function {:builtin "mod"} $smod.i96(i1: i96, i2: i96) returns (i96);
function {:builtin "mod"} $smod.i128(i1: i128, i2: i128) returns (i128);
function {:builtin "mod"} $smod.i160(i1: i160, i2: i160) returns (i160);
function {:builtin "mod"} $smod.i256(i1: i256, i2: i256) returns (i256);
function {:builtin "div"} $udiv.i1(i1: i1, i2: i1) returns (i1);
function {:builtin "div"} $udiv.i5(i1: i5, i2: i5) returns (i5);
function {:builtin "div"} $udiv.i6(i1: i6, i2: i6) returns (i6);
function {:builtin "div"} $udiv.i8(i1: i8, i2: i8) returns (i8);
function {:builtin "div"} $udiv.i16(i1: i16, i2: i16) returns (i16);
function {:builtin "div"} $udiv.i24(i1: i24, i2: i24) returns (i24);
function {:builtin "div"} $udiv.i32(i1: i32, i2: i32) returns (i32);
function {:builtin "div"} $udiv.i40(i1: i40, i2: i40) returns (i40);
function {:builtin "div"} $udiv.i48(i1: i48, i2: i48) returns (i48);
function {:builtin "div"} $udiv.i56(i1: i56, i2: i56) returns (i56);
function {:builtin "div"} $udiv.i64(i1: i64, i2: i64) returns (i64);
function {:builtin "div"} $udiv.i80(i1: i80, i2: i80) returns (i80);
function {:builtin "div"} $udiv.i88(i1: i88, i2: i88) returns (i88);
function {:builtin "div"} $udiv.i96(i1: i96, i2: i96) returns (i96);
function {:builtin "div"} $udiv.i128(i1: i128, i2: i128) returns (i128);
function {:builtin "div"} $udiv.i160(i1: i160, i2: i160) returns (i160);
function {:builtin "div"} $udiv.i256(i1: i256, i2: i256) returns (i256);
function {:inline} $srem.i1(i1: i1, i2: i1) returns (i1) { (if ($ne.i1.bool($smod.i1(i1, i2), 0) && $slt.i1.bool(i1, 0)) then $sub.i1($smod.i1(i1, i2), $smax.i1(i2, $sub.i1(0, i2))) else $smod.i1(i1, i2)) }
function {:inline} $srem.i5(i1: i5, i2: i5) returns (i5) { (if ($ne.i5.bool($smod.i5(i1, i2), 0) && $slt.i5.bool(i1, 0)) then $sub.i5($smod.i5(i1, i2), $smax.i5(i2, $sub.i5(0, i2))) else $smod.i5(i1, i2)) }
function {:inline} $srem.i6(i1: i6, i2: i6) returns (i6) { (if ($ne.i6.bool($smod.i6(i1, i2), 0) && $slt.i6.bool(i1, 0)) then $sub.i6($smod.i6(i1, i2), $smax.i6(i2, $sub.i6(0, i2))) else $smod.i6(i1, i2)) }
function {:inline} $srem.i8(i1: i8, i2: i8) returns (i8) { (if ($ne.i8.bool($smod.i8(i1, i2), 0) && $slt.i8.bool(i1, 0)) then $sub.i8($smod.i8(i1, i2), $smax.i8(i2, $sub.i8(0, i2))) else $smod.i8(i1, i2)) }
function {:inline} $srem.i16(i1: i16, i2: i16) returns (i16) { (if ($ne.i16.bool($smod.i16(i1, i2), 0) && $slt.i16.bool(i1, 0)) then $sub.i16($smod.i16(i1, i2), $smax.i16(i2, $sub.i16(0, i2))) else $smod.i16(i1, i2)) }
function {:inline} $srem.i24(i1: i24, i2: i24) returns (i24) { (if ($ne.i24.bool($smod.i24(i1, i2), 0) && $slt.i24.bool(i1, 0)) then $sub.i24($smod.i24(i1, i2), $smax.i24(i2, $sub.i24(0, i2))) else $smod.i24(i1, i2)) }
function {:inline} $srem.i32(i1: i32, i2: i32) returns (i32) { (if ($ne.i32.bool($smod.i32(i1, i2), 0) && $slt.i32.bool(i1, 0)) then $sub.i32($smod.i32(i1, i2), $smax.i32(i2, $sub.i32(0, i2))) else $smod.i32(i1, i2)) }
function {:inline} $srem.i40(i1: i40, i2: i40) returns (i40) { (if ($ne.i40.bool($smod.i40(i1, i2), 0) && $slt.i40.bool(i1, 0)) then $sub.i40($smod.i40(i1, i2), $smax.i40(i2, $sub.i40(0, i2))) else $smod.i40(i1, i2)) }
function {:inline} $srem.i48(i1: i48, i2: i48) returns (i48) { (if ($ne.i48.bool($smod.i48(i1, i2), 0) && $slt.i48.bool(i1, 0)) then $sub.i48($smod.i48(i1, i2), $smax.i48(i2, $sub.i48(0, i2))) else $smod.i48(i1, i2)) }
function {:inline} $srem.i56(i1: i56, i2: i56) returns (i56) { (if ($ne.i56.bool($smod.i56(i1, i2), 0) && $slt.i56.bool(i1, 0)) then $sub.i56($smod.i56(i1, i2), $smax.i56(i2, $sub.i56(0, i2))) else $smod.i56(i1, i2)) }
function {:inline} $srem.i64(i1: i64, i2: i64) returns (i64) { (if ($ne.i64.bool($smod.i64(i1, i2), 0) && $slt.i64.bool(i1, 0)) then $sub.i64($smod.i64(i1, i2), $smax.i64(i2, $sub.i64(0, i2))) else $smod.i64(i1, i2)) }
function {:inline} $srem.i80(i1: i80, i2: i80) returns (i80) { (if ($ne.i80.bool($smod.i80(i1, i2), 0) && $slt.i80.bool(i1, 0)) then $sub.i80($smod.i80(i1, i2), $smax.i80(i2, $sub.i80(0, i2))) else $smod.i80(i1, i2)) }
function {:inline} $srem.i88(i1: i88, i2: i88) returns (i88) { (if ($ne.i88.bool($smod.i88(i1, i2), 0) && $slt.i88.bool(i1, 0)) then $sub.i88($smod.i88(i1, i2), $smax.i88(i2, $sub.i88(0, i2))) else $smod.i88(i1, i2)) }
function {:inline} $srem.i96(i1: i96, i2: i96) returns (i96) { (if ($ne.i96.bool($smod.i96(i1, i2), 0) && $slt.i96.bool(i1, 0)) then $sub.i96($smod.i96(i1, i2), $smax.i96(i2, $sub.i96(0, i2))) else $smod.i96(i1, i2)) }
function {:inline} $srem.i128(i1: i128, i2: i128) returns (i128) { (if ($ne.i128.bool($smod.i128(i1, i2), 0) && $slt.i128.bool(i1, 0)) then $sub.i128($smod.i128(i1, i2), $smax.i128(i2, $sub.i128(0, i2))) else $smod.i128(i1, i2)) }
function {:inline} $srem.i160(i1: i160, i2: i160) returns (i160) { (if ($ne.i160.bool($smod.i160(i1, i2), 0) && $slt.i160.bool(i1, 0)) then $sub.i160($smod.i160(i1, i2), $smax.i160(i2, $sub.i160(0, i2))) else $smod.i160(i1, i2)) }
function {:inline} $srem.i256(i1: i256, i2: i256) returns (i256) { (if ($ne.i256.bool($smod.i256(i1, i2), 0) && $slt.i256.bool(i1, 0)) then $sub.i256($smod.i256(i1, i2), $smax.i256(i2, $sub.i256(0, i2))) else $smod.i256(i1, i2)) }
function {:inline} $urem.i1(i1: i1, i2: i1) returns (i1) { $smod.i1(i1, i2) }
function {:inline} $urem.i5(i1: i5, i2: i5) returns (i5) { $smod.i5(i1, i2) }
function {:inline} $urem.i6(i1: i6, i2: i6) returns (i6) { $smod.i6(i1, i2) }
function {:inline} $urem.i8(i1: i8, i2: i8) returns (i8) { $smod.i8(i1, i2) }
function {:inline} $urem.i16(i1: i16, i2: i16) returns (i16) { $smod.i16(i1, i2) }
function {:inline} $urem.i24(i1: i24, i2: i24) returns (i24) { $smod.i24(i1, i2) }
function {:inline} $urem.i32(i1: i32, i2: i32) returns (i32) { $smod.i32(i1, i2) }
function {:inline} $urem.i40(i1: i40, i2: i40) returns (i40) { $smod.i40(i1, i2) }
function {:inline} $urem.i48(i1: i48, i2: i48) returns (i48) { $smod.i48(i1, i2) }
function {:inline} $urem.i56(i1: i56, i2: i56) returns (i56) { $smod.i56(i1, i2) }
function {:inline} $urem.i64(i1: i64, i2: i64) returns (i64) { $smod.i64(i1, i2) }
function {:inline} $urem.i80(i1: i80, i2: i80) returns (i80) { $smod.i80(i1, i2) }
function {:inline} $urem.i88(i1: i88, i2: i88) returns (i88) { $smod.i88(i1, i2) }
function {:inline} $urem.i96(i1: i96, i2: i96) returns (i96) { $smod.i96(i1, i2) }
function {:inline} $urem.i128(i1: i128, i2: i128) returns (i128) { $smod.i128(i1, i2) }
function {:inline} $urem.i160(i1: i160, i2: i160) returns (i160) { $smod.i160(i1, i2) }
function {:inline} $urem.i256(i1: i256, i2: i256) returns (i256) { $smod.i256(i1, i2) }
function $shl.i1(i1: i1, i2: i1) returns (i1);
function $shl.i5(i1: i5, i2: i5) returns (i5);
function $shl.i6(i1: i6, i2: i6) returns (i6);
function $shl.i8(i1: i8, i2: i8) returns (i8);
function $shl.i16(i1: i16, i2: i16) returns (i16);
function $shl.i24(i1: i24, i2: i24) returns (i24);
function $shl.i32(i1: i32, i2: i32) returns (i32);
function $shl.i40(i1: i40, i2: i40) returns (i40);
function $shl.i48(i1: i48, i2: i48) returns (i48);
function $shl.i56(i1: i56, i2: i56) returns (i56);
function $shl.i64(i1: i64, i2: i64) returns (i64);
function $shl.i80(i1: i80, i2: i80) returns (i80);
function $shl.i88(i1: i88, i2: i88) returns (i88);
function $shl.i96(i1: i96, i2: i96) returns (i96);
function $shl.i128(i1: i128, i2: i128) returns (i128);
function $shl.i160(i1: i160, i2: i160) returns (i160);
function $shl.i256(i1: i256, i2: i256) returns (i256);
function $lshr.i1(i1: i1, i2: i1) returns (i1);
function $lshr.i5(i1: i5, i2: i5) returns (i5);
function $lshr.i6(i1: i6, i2: i6) returns (i6);
function $lshr.i8(i1: i8, i2: i8) returns (i8);
function $lshr.i16(i1: i16, i2: i16) returns (i16);
function $lshr.i24(i1: i24, i2: i24) returns (i24);
function $lshr.i32(i1: i32, i2: i32) returns (i32);
function $lshr.i40(i1: i40, i2: i40) returns (i40);
function $lshr.i48(i1: i48, i2: i48) returns (i48);
function $lshr.i56(i1: i56, i2: i56) returns (i56);
function $lshr.i64(i1: i64, i2: i64) returns (i64);
function $lshr.i80(i1: i80, i2: i80) returns (i80);
function $lshr.i88(i1: i88, i2: i88) returns (i88);
function $lshr.i96(i1: i96, i2: i96) returns (i96);
function $lshr.i128(i1: i128, i2: i128) returns (i128);
function $lshr.i160(i1: i160, i2: i160) returns (i160);
function $lshr.i256(i1: i256, i2: i256) returns (i256);
function $ashr.i1(i1: i1, i2: i1) returns (i1);
function $ashr.i5(i1: i5, i2: i5) returns (i5);
function $ashr.i6(i1: i6, i2: i6) returns (i6);
function $ashr.i8(i1: i8, i2: i8) returns (i8);
function $ashr.i16(i1: i16, i2: i16) returns (i16);
function $ashr.i24(i1: i24, i2: i24) returns (i24);
function $ashr.i32(i1: i32, i2: i32) returns (i32);
function $ashr.i40(i1: i40, i2: i40) returns (i40);
function $ashr.i48(i1: i48, i2: i48) returns (i48);
function $ashr.i56(i1: i56, i2: i56) returns (i56);
function $ashr.i64(i1: i64, i2: i64) returns (i64);
function $ashr.i80(i1: i80, i2: i80) returns (i80);
function $ashr.i88(i1: i88, i2: i88) returns (i88);
function $ashr.i96(i1: i96, i2: i96) returns (i96);
function $ashr.i128(i1: i128, i2: i128) returns (i128);
function $ashr.i160(i1: i160, i2: i160) returns (i160);
function $ashr.i256(i1: i256, i2: i256) returns (i256);
function $and.i1(i1: i1, i2: i1) returns (i1);
function $and.i5(i1: i5, i2: i5) returns (i5);
function $and.i6(i1: i6, i2: i6) returns (i6);
function $and.i8(i1: i8, i2: i8) returns (i8);
function $and.i16(i1: i16, i2: i16) returns (i16);
function $and.i24(i1: i24, i2: i24) returns (i24);
function $and.i32(i1: i32, i2: i32) returns (i32);
function $and.i40(i1: i40, i2: i40) returns (i40);
function $and.i48(i1: i48, i2: i48) returns (i48);
function $and.i56(i1: i56, i2: i56) returns (i56);
function $and.i64(i1: i64, i2: i64) returns (i64);
function $and.i80(i1: i80, i2: i80) returns (i80);
function $and.i88(i1: i88, i2: i88) returns (i88);
function $and.i96(i1: i96, i2: i96) returns (i96);
function $and.i128(i1: i128, i2: i128) returns (i128);
function $and.i160(i1: i160, i2: i160) returns (i160);
function $and.i256(i1: i256, i2: i256) returns (i256);
function $or.i1(i1: i1, i2: i1) returns (i1);
function $or.i5(i1: i5, i2: i5) returns (i5);
function $or.i6(i1: i6, i2: i6) returns (i6);
function $or.i8(i1: i8, i2: i8) returns (i8);
function $or.i16(i1: i16, i2: i16) returns (i16);
function $or.i24(i1: i24, i2: i24) returns (i24);
function $or.i32(i1: i32, i2: i32) returns (i32);
function $or.i40(i1: i40, i2: i40) returns (i40);
function $or.i48(i1: i48, i2: i48) returns (i48);
function $or.i56(i1: i56, i2: i56) returns (i56);
function $or.i64(i1: i64, i2: i64) returns (i64);
function $or.i80(i1: i80, i2: i80) returns (i80);
function $or.i88(i1: i88, i2: i88) returns (i88);
function $or.i96(i1: i96, i2: i96) returns (i96);
function $or.i128(i1: i128, i2: i128) returns (i128);
function $or.i160(i1: i160, i2: i160) returns (i160);
function $or.i256(i1: i256, i2: i256) returns (i256);
function $xor.i1(i1: i1, i2: i1) returns (i1);
function $xor.i5(i1: i5, i2: i5) returns (i5);
function $xor.i6(i1: i6, i2: i6) returns (i6);
function $xor.i8(i1: i8, i2: i8) returns (i8);
function $xor.i16(i1: i16, i2: i16) returns (i16);
function $xor.i24(i1: i24, i2: i24) returns (i24);
function $xor.i32(i1: i32, i2: i32) returns (i32);
function $xor.i40(i1: i40, i2: i40) returns (i40);
function $xor.i48(i1: i48, i2: i48) returns (i48);
function $xor.i56(i1: i56, i2: i56) returns (i56);
function $xor.i64(i1: i64, i2: i64) returns (i64);
function $xor.i80(i1: i80, i2: i80) returns (i80);
function $xor.i88(i1: i88, i2: i88) returns (i88);
function $xor.i96(i1: i96, i2: i96) returns (i96);
function $xor.i128(i1: i128, i2: i128) returns (i128);
function $xor.i160(i1: i160, i2: i160) returns (i160);
function $xor.i256(i1: i256, i2: i256) returns (i256);
function $nand.i1(i1: i1, i2: i1) returns (i1);
function $nand.i5(i1: i5, i2: i5) returns (i5);
function $nand.i6(i1: i6, i2: i6) returns (i6);
function $nand.i8(i1: i8, i2: i8) returns (i8);
function $nand.i16(i1: i16, i2: i16) returns (i16);
function $nand.i24(i1: i24, i2: i24) returns (i24);
function $nand.i32(i1: i32, i2: i32) returns (i32);
function $nand.i40(i1: i40, i2: i40) returns (i40);
function $nand.i48(i1: i48, i2: i48) returns (i48);
function $nand.i56(i1: i56, i2: i56) returns (i56);
function $nand.i64(i1: i64, i2: i64) returns (i64);
function $nand.i80(i1: i80, i2: i80) returns (i80);
function $nand.i88(i1: i88, i2: i88) returns (i88);
function $nand.i96(i1: i96, i2: i96) returns (i96);
function $nand.i128(i1: i128, i2: i128) returns (i128);
function $nand.i160(i1: i160, i2: i160) returns (i160);
function $nand.i256(i1: i256, i2: i256) returns (i256);
function $not.i1(i: i1) returns (i1);
function $not.i5(i: i5) returns (i5);
function $not.i6(i: i6) returns (i6);
function $not.i8(i: i8) returns (i8);
function $not.i16(i: i16) returns (i16);
function $not.i24(i: i24) returns (i24);
function $not.i32(i: i32) returns (i32);
function $not.i40(i: i40) returns (i40);
function $not.i48(i: i48) returns (i48);
function $not.i56(i: i56) returns (i56);
function $not.i64(i: i64) returns (i64);
function $not.i80(i: i80) returns (i80);
function $not.i88(i: i88) returns (i88);
function $not.i96(i: i96) returns (i96);
function $not.i128(i: i128) returns (i128);
function $not.i160(i: i160) returns (i160);
function $not.i256(i: i256) returns (i256);
function {:inline} $smin.i1(i1: i1, i2: i1) returns (i1) { (if (i1 < i2) then i1 else i2) }
function {:inline} $smin.i5(i1: i5, i2: i5) returns (i5) { (if (i1 < i2) then i1 else i2) }
function {:inline} $smin.i6(i1: i6, i2: i6) returns (i6) { (if (i1 < i2) then i1 else i2) }
function {:inline} $smin.i8(i1: i8, i2: i8) returns (i8) { (if (i1 < i2) then i1 else i2) }
function {:inline} $smin.i16(i1: i16, i2: i16) returns (i16) { (if (i1 < i2) then i1 else i2) }
function {:inline} $smin.i24(i1: i24, i2: i24) returns (i24) { (if (i1 < i2) then i1 else i2) }
function {:inline} $smin.i32(i1: i32, i2: i32) returns (i32) { (if (i1 < i2) then i1 else i2) }
function {:inline} $smin.i40(i1: i40, i2: i40) returns (i40) { (if (i1 < i2) then i1 else i2) }
function {:inline} $smin.i48(i1: i48, i2: i48) returns (i48) { (if (i1 < i2) then i1 else i2) }
function {:inline} $smin.i56(i1: i56, i2: i56) returns (i56) { (if (i1 < i2) then i1 else i2) }
function {:inline} $smin.i64(i1: i64, i2: i64) returns (i64) { (if (i1 < i2) then i1 else i2) }
function {:inline} $smin.i80(i1: i80, i2: i80) returns (i80) { (if (i1 < i2) then i1 else i2) }
function {:inline} $smin.i88(i1: i88, i2: i88) returns (i88) { (if (i1 < i2) then i1 else i2) }
function {:inline} $smin.i96(i1: i96, i2: i96) returns (i96) { (if (i1 < i2) then i1 else i2) }
function {:inline} $smin.i128(i1: i128, i2: i128) returns (i128) { (if (i1 < i2) then i1 else i2) }
function {:inline} $smin.i160(i1: i160, i2: i160) returns (i160) { (if (i1 < i2) then i1 else i2) }
function {:inline} $smin.i256(i1: i256, i2: i256) returns (i256) { (if (i1 < i2) then i1 else i2) }
function {:inline} $smax.i1(i1: i1, i2: i1) returns (i1) { (if (i2 < i1) then i1 else i2) }
function {:inline} $smax.i5(i1: i5, i2: i5) returns (i5) { (if (i2 < i1) then i1 else i2) }
function {:inline} $smax.i6(i1: i6, i2: i6) returns (i6) { (if (i2 < i1) then i1 else i2) }
function {:inline} $smax.i8(i1: i8, i2: i8) returns (i8) { (if (i2 < i1) then i1 else i2) }
function {:inline} $smax.i16(i1: i16, i2: i16) returns (i16) { (if (i2 < i1) then i1 else i2) }
function {:inline} $smax.i24(i1: i24, i2: i24) returns (i24) { (if (i2 < i1) then i1 else i2) }
function {:inline} $smax.i32(i1: i32, i2: i32) returns (i32) { (if (i2 < i1) then i1 else i2) }
function {:inline} $smax.i40(i1: i40, i2: i40) returns (i40) { (if (i2 < i1) then i1 else i2) }
function {:inline} $smax.i48(i1: i48, i2: i48) returns (i48) { (if (i2 < i1) then i1 else i2) }
function {:inline} $smax.i56(i1: i56, i2: i56) returns (i56) { (if (i2 < i1) then i1 else i2) }
function {:inline} $smax.i64(i1: i64, i2: i64) returns (i64) { (if (i2 < i1) then i1 else i2) }
function {:inline} $smax.i80(i1: i80, i2: i80) returns (i80) { (if (i2 < i1) then i1 else i2) }
function {:inline} $smax.i88(i1: i88, i2: i88) returns (i88) { (if (i2 < i1) then i1 else i2) }
function {:inline} $smax.i96(i1: i96, i2: i96) returns (i96) { (if (i2 < i1) then i1 else i2) }
function {:inline} $smax.i128(i1: i128, i2: i128) returns (i128) { (if (i2 < i1) then i1 else i2) }
function {:inline} $smax.i160(i1: i160, i2: i160) returns (i160) { (if (i2 < i1) then i1 else i2) }
function {:inline} $smax.i256(i1: i256, i2: i256) returns (i256) { (if (i2 < i1) then i1 else i2) }
function {:inline} $umin.i1(i1: i1, i2: i1) returns (i1) { (if (i1 < i2) then i1 else i2) }
function {:inline} $umin.i5(i1: i5, i2: i5) returns (i5) { (if (i1 < i2) then i1 else i2) }
function {:inline} $umin.i6(i1: i6, i2: i6) returns (i6) { (if (i1 < i2) then i1 else i2) }
function {:inline} $umin.i8(i1: i8, i2: i8) returns (i8) { (if (i1 < i2) then i1 else i2) }
function {:inline} $umin.i16(i1: i16, i2: i16) returns (i16) { (if (i1 < i2) then i1 else i2) }
function {:inline} $umin.i24(i1: i24, i2: i24) returns (i24) { (if (i1 < i2) then i1 else i2) }
function {:inline} $umin.i32(i1: i32, i2: i32) returns (i32) { (if (i1 < i2) then i1 else i2) }
function {:inline} $umin.i40(i1: i40, i2: i40) returns (i40) { (if (i1 < i2) then i1 else i2) }
function {:inline} $umin.i48(i1: i48, i2: i48) returns (i48) { (if (i1 < i2) then i1 else i2) }
function {:inline} $umin.i56(i1: i56, i2: i56) returns (i56) { (if (i1 < i2) then i1 else i2) }
function {:inline} $umin.i64(i1: i64, i2: i64) returns (i64) { (if (i1 < i2) then i1 else i2) }
function {:inline} $umin.i80(i1: i80, i2: i80) returns (i80) { (if (i1 < i2) then i1 else i2) }
function {:inline} $umin.i88(i1: i88, i2: i88) returns (i88) { (if (i1 < i2) then i1 else i2) }
function {:inline} $umin.i96(i1: i96, i2: i96) returns (i96) { (if (i1 < i2) then i1 else i2) }
function {:inline} $umin.i128(i1: i128, i2: i128) returns (i128) { (if (i1 < i2) then i1 else i2) }
function {:inline} $umin.i160(i1: i160, i2: i160) returns (i160) { (if (i1 < i2) then i1 else i2) }
function {:inline} $umin.i256(i1: i256, i2: i256) returns (i256) { (if (i1 < i2) then i1 else i2) }
function {:inline} $umax.i1(i1: i1, i2: i1) returns (i1) { (if (i2 < i1) then i1 else i2) }
function {:inline} $umax.i5(i1: i5, i2: i5) returns (i5) { (if (i2 < i1) then i1 else i2) }
function {:inline} $umax.i6(i1: i6, i2: i6) returns (i6) { (if (i2 < i1) then i1 else i2) }
function {:inline} $umax.i8(i1: i8, i2: i8) returns (i8) { (if (i2 < i1) then i1 else i2) }
function {:inline} $umax.i16(i1: i16, i2: i16) returns (i16) { (if (i2 < i1) then i1 else i2) }
function {:inline} $umax.i24(i1: i24, i2: i24) returns (i24) { (if (i2 < i1) then i1 else i2) }
function {:inline} $umax.i32(i1: i32, i2: i32) returns (i32) { (if (i2 < i1) then i1 else i2) }
function {:inline} $umax.i40(i1: i40, i2: i40) returns (i40) { (if (i2 < i1) then i1 else i2) }
function {:inline} $umax.i48(i1: i48, i2: i48) returns (i48) { (if (i2 < i1) then i1 else i2) }
function {:inline} $umax.i56(i1: i56, i2: i56) returns (i56) { (if (i2 < i1) then i1 else i2) }
function {:inline} $umax.i64(i1: i64, i2: i64) returns (i64) { (if (i2 < i1) then i1 else i2) }
function {:inline} $umax.i80(i1: i80, i2: i80) returns (i80) { (if (i2 < i1) then i1 else i2) }
function {:inline} $umax.i88(i1: i88, i2: i88) returns (i88) { (if (i2 < i1) then i1 else i2) }
function {:inline} $umax.i96(i1: i96, i2: i96) returns (i96) { (if (i2 < i1) then i1 else i2) }
function {:inline} $umax.i128(i1: i128, i2: i128) returns (i128) { (if (i2 < i1) then i1 else i2) }
function {:inline} $umax.i160(i1: i160, i2: i160) returns (i160) { (if (i2 < i1) then i1 else i2) }
function {:inline} $umax.i256(i1: i256, i2: i256) returns (i256) { (if (i2 < i1) then i1 else i2) }
axiom ($and.i1(0, 0) == 0);
axiom ($or.i1(0, 0) == 0);
axiom ($xor.i1(0, 0) == 0);
axiom ($and.i1(0, 1) == 0);
axiom ($or.i1(0, 1) == 1);
axiom ($xor.i1(0, 1) == 1);
axiom ($and.i1(1, 0) == 0);
axiom ($or.i1(1, 0) == 1);
axiom ($xor.i1(1, 0) == 1);
axiom ($and.i1(1, 1) == 1);
axiom ($or.i1(1, 1) == 1);
axiom ($xor.i1(1, 1) == 0);
axiom ($and.i32(32, 16) == 0);
// Integer predicates
function {:inline} $ule.i1.bool(i1: i1, i2: i1) returns (bool) { (i1 <= i2) }
function {:inline} $ule.i1(i1: i1, i2: i1) returns (i1) { (if $ule.i1.bool(i1, i2) then 1 else 0) }
function {:inline} $ule.i5.bool(i1: i5, i2: i5) returns (bool) { (i1 <= i2) }
function {:inline} $ule.i5(i1: i5, i2: i5) returns (i1) { (if $ule.i5.bool(i1, i2) then 1 else 0) }
function {:inline} $ule.i6.bool(i1: i6, i2: i6) returns (bool) { (i1 <= i2) }
function {:inline} $ule.i6(i1: i6, i2: i6) returns (i1) { (if $ule.i6.bool(i1, i2) then 1 else 0) }
function {:inline} $ule.i8.bool(i1: i8, i2: i8) returns (bool) { (i1 <= i2) }
function {:inline} $ule.i8(i1: i8, i2: i8) returns (i1) { (if $ule.i8.bool(i1, i2) then 1 else 0) }
function {:inline} $ule.i16.bool(i1: i16, i2: i16) returns (bool) { (i1 <= i2) }
function {:inline} $ule.i16(i1: i16, i2: i16) returns (i1) { (if $ule.i16.bool(i1, i2) then 1 else 0) }
function {:inline} $ule.i24.bool(i1: i24, i2: i24) returns (bool) { (i1 <= i2) }
function {:inline} $ule.i24(i1: i24, i2: i24) returns (i1) { (if $ule.i24.bool(i1, i2) then 1 else 0) }
function {:inline} $ule.i32.bool(i1: i32, i2: i32) returns (bool) { (i1 <= i2) }
function {:inline} $ule.i32(i1: i32, i2: i32) returns (i1) { (if $ule.i32.bool(i1, i2) then 1 else 0) }
function {:inline} $ule.i40.bool(i1: i40, i2: i40) returns (bool) { (i1 <= i2) }
function {:inline} $ule.i40(i1: i40, i2: i40) returns (i1) { (if $ule.i40.bool(i1, i2) then 1 else 0) }
function {:inline} $ule.i48.bool(i1: i48, i2: i48) returns (bool) { (i1 <= i2) }
function {:inline} $ule.i48(i1: i48, i2: i48) returns (i1) { (if $ule.i48.bool(i1, i2) then 1 else 0) }
function {:inline} $ule.i56.bool(i1: i56, i2: i56) returns (bool) { (i1 <= i2) }
function {:inline} $ule.i56(i1: i56, i2: i56) returns (i1) { (if $ule.i56.bool(i1, i2) then 1 else 0) }
function {:inline} $ule.i64.bool(i1: i64, i2: i64) returns (bool) { (i1 <= i2) }
function {:inline} $ule.i64(i1: i64, i2: i64) returns (i1) { (if $ule.i64.bool(i1, i2) then 1 else 0) }
function {:inline} $ule.i80.bool(i1: i80, i2: i80) returns (bool) { (i1 <= i2) }
function {:inline} $ule.i80(i1: i80, i2: i80) returns (i1) { (if $ule.i80.bool(i1, i2) then 1 else 0) }
function {:inline} $ule.i88.bool(i1: i88, i2: i88) returns (bool) { (i1 <= i2) }
function {:inline} $ule.i88(i1: i88, i2: i88) returns (i1) { (if $ule.i88.bool(i1, i2) then 1 else 0) }
function {:inline} $ule.i96.bool(i1: i96, i2: i96) returns (bool) { (i1 <= i2) }
function {:inline} $ule.i96(i1: i96, i2: i96) returns (i1) { (if $ule.i96.bool(i1, i2) then 1 else 0) }
function {:inline} $ule.i128.bool(i1: i128, i2: i128) returns (bool) { (i1 <= i2) }
function {:inline} $ule.i128(i1: i128, i2: i128) returns (i1) { (if $ule.i128.bool(i1, i2) then 1 else 0) }
function {:inline} $ule.i160.bool(i1: i160, i2: i160) returns (bool) { (i1 <= i2) }
function {:inline} $ule.i160(i1: i160, i2: i160) returns (i1) { (if $ule.i160.bool(i1, i2) then 1 else 0) }
function {:inline} $ule.i256.bool(i1: i256, i2: i256) returns (bool) { (i1 <= i2) }
function {:inline} $ule.i256(i1: i256, i2: i256) returns (i1) { (if $ule.i256.bool(i1, i2) then 1 else 0) }
function {:inline} $ult.i1.bool(i1: i1, i2: i1) returns (bool) { (i1 < i2) }
function {:inline} $ult.i1(i1: i1, i2: i1) returns (i1) { (if $ult.i1.bool(i1, i2) then 1 else 0) }
function {:inline} $ult.i5.bool(i1: i5, i2: i5) returns (bool) { (i1 < i2) }
function {:inline} $ult.i5(i1: i5, i2: i5) returns (i1) { (if $ult.i5.bool(i1, i2) then 1 else 0) }
function {:inline} $ult.i6.bool(i1: i6, i2: i6) returns (bool) { (i1 < i2) }
function {:inline} $ult.i6(i1: i6, i2: i6) returns (i1) { (if $ult.i6.bool(i1, i2) then 1 else 0) }
function {:inline} $ult.i8.bool(i1: i8, i2: i8) returns (bool) { (i1 < i2) }
function {:inline} $ult.i8(i1: i8, i2: i8) returns (i1) { (if $ult.i8.bool(i1, i2) then 1 else 0) }
function {:inline} $ult.i16.bool(i1: i16, i2: i16) returns (bool) { (i1 < i2) }
function {:inline} $ult.i16(i1: i16, i2: i16) returns (i1) { (if $ult.i16.bool(i1, i2) then 1 else 0) }
function {:inline} $ult.i24.bool(i1: i24, i2: i24) returns (bool) { (i1 < i2) }
function {:inline} $ult.i24(i1: i24, i2: i24) returns (i1) { (if $ult.i24.bool(i1, i2) then 1 else 0) }
function {:inline} $ult.i32.bool(i1: i32, i2: i32) returns (bool) { (i1 < i2) }
function {:inline} $ult.i32(i1: i32, i2: i32) returns (i1) { (if $ult.i32.bool(i1, i2) then 1 else 0) }
function {:inline} $ult.i40.bool(i1: i40, i2: i40) returns (bool) { (i1 < i2) }
function {:inline} $ult.i40(i1: i40, i2: i40) returns (i1) { (if $ult.i40.bool(i1, i2) then 1 else 0) }
function {:inline} $ult.i48.bool(i1: i48, i2: i48) returns (bool) { (i1 < i2) }
function {:inline} $ult.i48(i1: i48, i2: i48) returns (i1) { (if $ult.i48.bool(i1, i2) then 1 else 0) }
function {:inline} $ult.i56.bool(i1: i56, i2: i56) returns (bool) { (i1 < i2) }
function {:inline} $ult.i56(i1: i56, i2: i56) returns (i1) { (if $ult.i56.bool(i1, i2) then 1 else 0) }
function {:inline} $ult.i64.bool(i1: i64, i2: i64) returns (bool) { (i1 < i2) }
function {:inline} $ult.i64(i1: i64, i2: i64) returns (i1) { (if $ult.i64.bool(i1, i2) then 1 else 0) }
function {:inline} $ult.i80.bool(i1: i80, i2: i80) returns (bool) { (i1 < i2) }
function {:inline} $ult.i80(i1: i80, i2: i80) returns (i1) { (if $ult.i80.bool(i1, i2) then 1 else 0) }
function {:inline} $ult.i88.bool(i1: i88, i2: i88) returns (bool) { (i1 < i2) }
function {:inline} $ult.i88(i1: i88, i2: i88) returns (i1) { (if $ult.i88.bool(i1, i2) then 1 else 0) }
function {:inline} $ult.i96.bool(i1: i96, i2: i96) returns (bool) { (i1 < i2) }
function {:inline} $ult.i96(i1: i96, i2: i96) returns (i1) { (if $ult.i96.bool(i1, i2) then 1 else 0) }
function {:inline} $ult.i128.bool(i1: i128, i2: i128) returns (bool) { (i1 < i2) }
function {:inline} $ult.i128(i1: i128, i2: i128) returns (i1) { (if $ult.i128.bool(i1, i2) then 1 else 0) }
function {:inline} $ult.i160.bool(i1: i160, i2: i160) returns (bool) { (i1 < i2) }
function {:inline} $ult.i160(i1: i160, i2: i160) returns (i1) { (if $ult.i160.bool(i1, i2) then 1 else 0) }
function {:inline} $ult.i256.bool(i1: i256, i2: i256) returns (bool) { (i1 < i2) }
function {:inline} $ult.i256(i1: i256, i2: i256) returns (i1) { (if $ult.i256.bool(i1, i2) then 1 else 0) }
function {:inline} $uge.i1.bool(i1: i1, i2: i1) returns (bool) { (i1 >= i2) }
function {:inline} $uge.i1(i1: i1, i2: i1) returns (i1) { (if $uge.i1.bool(i1, i2) then 1 else 0) }
function {:inline} $uge.i5.bool(i1: i5, i2: i5) returns (bool) { (i1 >= i2) }
function {:inline} $uge.i5(i1: i5, i2: i5) returns (i1) { (if $uge.i5.bool(i1, i2) then 1 else 0) }
function {:inline} $uge.i6.bool(i1: i6, i2: i6) returns (bool) { (i1 >= i2) }
function {:inline} $uge.i6(i1: i6, i2: i6) returns (i1) { (if $uge.i6.bool(i1, i2) then 1 else 0) }
function {:inline} $uge.i8.bool(i1: i8, i2: i8) returns (bool) { (i1 >= i2) }
function {:inline} $uge.i8(i1: i8, i2: i8) returns (i1) { (if $uge.i8.bool(i1, i2) then 1 else 0) }
function {:inline} $uge.i16.bool(i1: i16, i2: i16) returns (bool) { (i1 >= i2) }
function {:inline} $uge.i16(i1: i16, i2: i16) returns (i1) { (if $uge.i16.bool(i1, i2) then 1 else 0) }
function {:inline} $uge.i24.bool(i1: i24, i2: i24) returns (bool) { (i1 >= i2) }
function {:inline} $uge.i24(i1: i24, i2: i24) returns (i1) { (if $uge.i24.bool(i1, i2) then 1 else 0) }
function {:inline} $uge.i32.bool(i1: i32, i2: i32) returns (bool) { (i1 >= i2) }
function {:inline} $uge.i32(i1: i32, i2: i32) returns (i1) { (if $uge.i32.bool(i1, i2) then 1 else 0) }
function {:inline} $uge.i40.bool(i1: i40, i2: i40) returns (bool) { (i1 >= i2) }
function {:inline} $uge.i40(i1: i40, i2: i40) returns (i1) { (if $uge.i40.bool(i1, i2) then 1 else 0) }
function {:inline} $uge.i48.bool(i1: i48, i2: i48) returns (bool) { (i1 >= i2) }
function {:inline} $uge.i48(i1: i48, i2: i48) returns (i1) { (if $uge.i48.bool(i1, i2) then 1 else 0) }
function {:inline} $uge.i56.bool(i1: i56, i2: i56) returns (bool) { (i1 >= i2) }
function {:inline} $uge.i56(i1: i56, i2: i56) returns (i1) { (if $uge.i56.bool(i1, i2) then 1 else 0) }
function {:inline} $uge.i64.bool(i1: i64, i2: i64) returns (bool) { (i1 >= i2) }
function {:inline} $uge.i64(i1: i64, i2: i64) returns (i1) { (if $uge.i64.bool(i1, i2) then 1 else 0) }
function {:inline} $uge.i80.bool(i1: i80, i2: i80) returns (bool) { (i1 >= i2) }
function {:inline} $uge.i80(i1: i80, i2: i80) returns (i1) { (if $uge.i80.bool(i1, i2) then 1 else 0) }
function {:inline} $uge.i88.bool(i1: i88, i2: i88) returns (bool) { (i1 >= i2) }
function {:inline} $uge.i88(i1: i88, i2: i88) returns (i1) { (if $uge.i88.bool(i1, i2) then 1 else 0) }
function {:inline} $uge.i96.bool(i1: i96, i2: i96) returns (bool) { (i1 >= i2) }
function {:inline} $uge.i96(i1: i96, i2: i96) returns (i1) { (if $uge.i96.bool(i1, i2) then 1 else 0) }
function {:inline} $uge.i128.bool(i1: i128, i2: i128) returns (bool) { (i1 >= i2) }
function {:inline} $uge.i128(i1: i128, i2: i128) returns (i1) { (if $uge.i128.bool(i1, i2) then 1 else 0) }
function {:inline} $uge.i160.bool(i1: i160, i2: i160) returns (bool) { (i1 >= i2) }
function {:inline} $uge.i160(i1: i160, i2: i160) returns (i1) { (if $uge.i160.bool(i1, i2) then 1 else 0) }
function {:inline} $uge.i256.bool(i1: i256, i2: i256) returns (bool) { (i1 >= i2) }
function {:inline} $uge.i256(i1: i256, i2: i256) returns (i1) { (if $uge.i256.bool(i1, i2) then 1 else 0) }
function {:inline} $ugt.i1.bool(i1: i1, i2: i1) returns (bool) { (i1 > i2) }
function {:inline} $ugt.i1(i1: i1, i2: i1) returns (i1) { (if $ugt.i1.bool(i1, i2) then 1 else 0) }
function {:inline} $ugt.i5.bool(i1: i5, i2: i5) returns (bool) { (i1 > i2) }
function {:inline} $ugt.i5(i1: i5, i2: i5) returns (i1) { (if $ugt.i5.bool(i1, i2) then 1 else 0) }
function {:inline} $ugt.i6.bool(i1: i6, i2: i6) returns (bool) { (i1 > i2) }
function {:inline} $ugt.i6(i1: i6, i2: i6) returns (i1) { (if $ugt.i6.bool(i1, i2) then 1 else 0) }
function {:inline} $ugt.i8.bool(i1: i8, i2: i8) returns (bool) { (i1 > i2) }
function {:inline} $ugt.i8(i1: i8, i2: i8) returns (i1) { (if $ugt.i8.bool(i1, i2) then 1 else 0) }
function {:inline} $ugt.i16.bool(i1: i16, i2: i16) returns (bool) { (i1 > i2) }
function {:inline} $ugt.i16(i1: i16, i2: i16) returns (i1) { (if $ugt.i16.bool(i1, i2) then 1 else 0) }
function {:inline} $ugt.i24.bool(i1: i24, i2: i24) returns (bool) { (i1 > i2) }
function {:inline} $ugt.i24(i1: i24, i2: i24) returns (i1) { (if $ugt.i24.bool(i1, i2) then 1 else 0) }
function {:inline} $ugt.i32.bool(i1: i32, i2: i32) returns (bool) { (i1 > i2) }
function {:inline} $ugt.i32(i1: i32, i2: i32) returns (i1) { (if $ugt.i32.bool(i1, i2) then 1 else 0) }
function {:inline} $ugt.i40.bool(i1: i40, i2: i40) returns (bool) { (i1 > i2) }
function {:inline} $ugt.i40(i1: i40, i2: i40) returns (i1) { (if $ugt.i40.bool(i1, i2) then 1 else 0) }
function {:inline} $ugt.i48.bool(i1: i48, i2: i48) returns (bool) { (i1 > i2) }
function {:inline} $ugt.i48(i1: i48, i2: i48) returns (i1) { (if $ugt.i48.bool(i1, i2) then 1 else 0) }
function {:inline} $ugt.i56.bool(i1: i56, i2: i56) returns (bool) { (i1 > i2) }
function {:inline} $ugt.i56(i1: i56, i2: i56) returns (i1) { (if $ugt.i56.bool(i1, i2) then 1 else 0) }
function {:inline} $ugt.i64.bool(i1: i64, i2: i64) returns (bool) { (i1 > i2) }
function {:inline} $ugt.i64(i1: i64, i2: i64) returns (i1) { (if $ugt.i64.bool(i1, i2) then 1 else 0) }
function {:inline} $ugt.i80.bool(i1: i80, i2: i80) returns (bool) { (i1 > i2) }
function {:inline} $ugt.i80(i1: i80, i2: i80) returns (i1) { (if $ugt.i80.bool(i1, i2) then 1 else 0) }
function {:inline} $ugt.i88.bool(i1: i88, i2: i88) returns (bool) { (i1 > i2) }
function {:inline} $ugt.i88(i1: i88, i2: i88) returns (i1) { (if $ugt.i88.bool(i1, i2) then 1 else 0) }
function {:inline} $ugt.i96.bool(i1: i96, i2: i96) returns (bool) { (i1 > i2) }
function {:inline} $ugt.i96(i1: i96, i2: i96) returns (i1) { (if $ugt.i96.bool(i1, i2) then 1 else 0) }
function {:inline} $ugt.i128.bool(i1: i128, i2: i128) returns (bool) { (i1 > i2) }
function {:inline} $ugt.i128(i1: i128, i2: i128) returns (i1) { (if $ugt.i128.bool(i1, i2) then 1 else 0) }
function {:inline} $ugt.i160.bool(i1: i160, i2: i160) returns (bool) { (i1 > i2) }
function {:inline} $ugt.i160(i1: i160, i2: i160) returns (i1) { (if $ugt.i160.bool(i1, i2) then 1 else 0) }
function {:inline} $ugt.i256.bool(i1: i256, i2: i256) returns (bool) { (i1 > i2) }
function {:inline} $ugt.i256(i1: i256, i2: i256) returns (i1) { (if $ugt.i256.bool(i1, i2) then 1 else 0) }
function {:inline} $sle.i1.bool(i1: i1, i2: i1) returns (bool) { (i1 <= i2) }
function {:inline} $sle.i1(i1: i1, i2: i1) returns (i1) { (if $sle.i1.bool(i1, i2) then 1 else 0) }
function {:inline} $sle.i5.bool(i1: i5, i2: i5) returns (bool) { (i1 <= i2) }
function {:inline} $sle.i5(i1: i5, i2: i5) returns (i1) { (if $sle.i5.bool(i1, i2) then 1 else 0) }
function {:inline} $sle.i6.bool(i1: i6, i2: i6) returns (bool) { (i1 <= i2) }
function {:inline} $sle.i6(i1: i6, i2: i6) returns (i1) { (if $sle.i6.bool(i1, i2) then 1 else 0) }
function {:inline} $sle.i8.bool(i1: i8, i2: i8) returns (bool) { (i1 <= i2) }
function {:inline} $sle.i8(i1: i8, i2: i8) returns (i1) { (if $sle.i8.bool(i1, i2) then 1 else 0) }
function {:inline} $sle.i16.bool(i1: i16, i2: i16) returns (bool) { (i1 <= i2) }
function {:inline} $sle.i16(i1: i16, i2: i16) returns (i1) { (if $sle.i16.bool(i1, i2) then 1 else 0) }
function {:inline} $sle.i24.bool(i1: i24, i2: i24) returns (bool) { (i1 <= i2) }
function {:inline} $sle.i24(i1: i24, i2: i24) returns (i1) { (if $sle.i24.bool(i1, i2) then 1 else 0) }
function {:inline} $sle.i32.bool(i1: i32, i2: i32) returns (bool) { (i1 <= i2) }
function {:inline} $sle.i32(i1: i32, i2: i32) returns (i1) { (if $sle.i32.bool(i1, i2) then 1 else 0) }
function {:inline} $sle.i40.bool(i1: i40, i2: i40) returns (bool) { (i1 <= i2) }
function {:inline} $sle.i40(i1: i40, i2: i40) returns (i1) { (if $sle.i40.bool(i1, i2) then 1 else 0) }
function {:inline} $sle.i48.bool(i1: i48, i2: i48) returns (bool) { (i1 <= i2) }
function {:inline} $sle.i48(i1: i48, i2: i48) returns (i1) { (if $sle.i48.bool(i1, i2) then 1 else 0) }
function {:inline} $sle.i56.bool(i1: i56, i2: i56) returns (bool) { (i1 <= i2) }
function {:inline} $sle.i56(i1: i56, i2: i56) returns (i1) { (if $sle.i56.bool(i1, i2) then 1 else 0) }
function {:inline} $sle.i64.bool(i1: i64, i2: i64) returns (bool) { (i1 <= i2) }
function {:inline} $sle.i64(i1: i64, i2: i64) returns (i1) { (if $sle.i64.bool(i1, i2) then 1 else 0) }
function {:inline} $sle.i80.bool(i1: i80, i2: i80) returns (bool) { (i1 <= i2) }
function {:inline} $sle.i80(i1: i80, i2: i80) returns (i1) { (if $sle.i80.bool(i1, i2) then 1 else 0) }
function {:inline} $sle.i88.bool(i1: i88, i2: i88) returns (bool) { (i1 <= i2) }
function {:inline} $sle.i88(i1: i88, i2: i88) returns (i1) { (if $sle.i88.bool(i1, i2) then 1 else 0) }
function {:inline} $sle.i96.bool(i1: i96, i2: i96) returns (bool) { (i1 <= i2) }
function {:inline} $sle.i96(i1: i96, i2: i96) returns (i1) { (if $sle.i96.bool(i1, i2) then 1 else 0) }
function {:inline} $sle.i128.bool(i1: i128, i2: i128) returns (bool) { (i1 <= i2) }
function {:inline} $sle.i128(i1: i128, i2: i128) returns (i1) { (if $sle.i128.bool(i1, i2) then 1 else 0) }
function {:inline} $sle.i160.bool(i1: i160, i2: i160) returns (bool) { (i1 <= i2) }
function {:inline} $sle.i160(i1: i160, i2: i160) returns (i1) { (if $sle.i160.bool(i1, i2) then 1 else 0) }
function {:inline} $sle.i256.bool(i1: i256, i2: i256) returns (bool) { (i1 <= i2) }
function {:inline} $sle.i256(i1: i256, i2: i256) returns (i1) { (if $sle.i256.bool(i1, i2) then 1 else 0) }
function {:inline} $slt.i1.bool(i1: i1, i2: i1) returns (bool) { (i1 < i2) }
function {:inline} $slt.i1(i1: i1, i2: i1) returns (i1) { (if $slt.i1.bool(i1, i2) then 1 else 0) }
function {:inline} $slt.i5.bool(i1: i5, i2: i5) returns (bool) { (i1 < i2) }
function {:inline} $slt.i5(i1: i5, i2: i5) returns (i1) { (if $slt.i5.bool(i1, i2) then 1 else 0) }
function {:inline} $slt.i6.bool(i1: i6, i2: i6) returns (bool) { (i1 < i2) }
function {:inline} $slt.i6(i1: i6, i2: i6) returns (i1) { (if $slt.i6.bool(i1, i2) then 1 else 0) }
function {:inline} $slt.i8.bool(i1: i8, i2: i8) returns (bool) { (i1 < i2) }
function {:inline} $slt.i8(i1: i8, i2: i8) returns (i1) { (if $slt.i8.bool(i1, i2) then 1 else 0) }
function {:inline} $slt.i16.bool(i1: i16, i2: i16) returns (bool) { (i1 < i2) }
function {:inline} $slt.i16(i1: i16, i2: i16) returns (i1) { (if $slt.i16.bool(i1, i2) then 1 else 0) }
function {:inline} $slt.i24.bool(i1: i24, i2: i24) returns (bool) { (i1 < i2) }
function {:inline} $slt.i24(i1: i24, i2: i24) returns (i1) { (if $slt.i24.bool(i1, i2) then 1 else 0) }
function {:inline} $slt.i32.bool(i1: i32, i2: i32) returns (bool) { (i1 < i2) }
function {:inline} $slt.i32(i1: i32, i2: i32) returns (i1) { (if $slt.i32.bool(i1, i2) then 1 else 0) }
function {:inline} $slt.i40.bool(i1: i40, i2: i40) returns (bool) { (i1 < i2) }
function {:inline} $slt.i40(i1: i40, i2: i40) returns (i1) { (if $slt.i40.bool(i1, i2) then 1 else 0) }
function {:inline} $slt.i48.bool(i1: i48, i2: i48) returns (bool) { (i1 < i2) }
function {:inline} $slt.i48(i1: i48, i2: i48) returns (i1) { (if $slt.i48.bool(i1, i2) then 1 else 0) }
function {:inline} $slt.i56.bool(i1: i56, i2: i56) returns (bool) { (i1 < i2) }
function {:inline} $slt.i56(i1: i56, i2: i56) returns (i1) { (if $slt.i56.bool(i1, i2) then 1 else 0) }
function {:inline} $slt.i64.bool(i1: i64, i2: i64) returns (bool) { (i1 < i2) }
function {:inline} $slt.i64(i1: i64, i2: i64) returns (i1) { (if $slt.i64.bool(i1, i2) then 1 else 0) }
function {:inline} $slt.i80.bool(i1: i80, i2: i80) returns (bool) { (i1 < i2) }
function {:inline} $slt.i80(i1: i80, i2: i80) returns (i1) { (if $slt.i80.bool(i1, i2) then 1 else 0) }
function {:inline} $slt.i88.bool(i1: i88, i2: i88) returns (bool) { (i1 < i2) }
function {:inline} $slt.i88(i1: i88, i2: i88) returns (i1) { (if $slt.i88.bool(i1, i2) then 1 else 0) }
function {:inline} $slt.i96.bool(i1: i96, i2: i96) returns (bool) { (i1 < i2) }
function {:inline} $slt.i96(i1: i96, i2: i96) returns (i1) { (if $slt.i96.bool(i1, i2) then 1 else 0) }
function {:inline} $slt.i128.bool(i1: i128, i2: i128) returns (bool) { (i1 < i2) }
function {:inline} $slt.i128(i1: i128, i2: i128) returns (i1) { (if $slt.i128.bool(i1, i2) then 1 else 0) }
function {:inline} $slt.i160.bool(i1: i160, i2: i160) returns (bool) { (i1 < i2) }
function {:inline} $slt.i160(i1: i160, i2: i160) returns (i1) { (if $slt.i160.bool(i1, i2) then 1 else 0) }
function {:inline} $slt.i256.bool(i1: i256, i2: i256) returns (bool) { (i1 < i2) }
function {:inline} $slt.i256(i1: i256, i2: i256) returns (i1) { (if $slt.i256.bool(i1, i2) then 1 else 0) }
function {:inline} $sge.i1.bool(i1: i1, i2: i1) returns (bool) { (i1 >= i2) }
function {:inline} $sge.i1(i1: i1, i2: i1) returns (i1) { (if $sge.i1.bool(i1, i2) then 1 else 0) }
function {:inline} $sge.i5.bool(i1: i5, i2: i5) returns (bool) { (i1 >= i2) }
function {:inline} $sge.i5(i1: i5, i2: i5) returns (i1) { (if $sge.i5.bool(i1, i2) then 1 else 0) }
function {:inline} $sge.i6.bool(i1: i6, i2: i6) returns (bool) { (i1 >= i2) }
function {:inline} $sge.i6(i1: i6, i2: i6) returns (i1) { (if $sge.i6.bool(i1, i2) then 1 else 0) }
function {:inline} $sge.i8.bool(i1: i8, i2: i8) returns (bool) { (i1 >= i2) }
function {:inline} $sge.i8(i1: i8, i2: i8) returns (i1) { (if $sge.i8.bool(i1, i2) then 1 else 0) }
function {:inline} $sge.i16.bool(i1: i16, i2: i16) returns (bool) { (i1 >= i2) }
function {:inline} $sge.i16(i1: i16, i2: i16) returns (i1) { (if $sge.i16.bool(i1, i2) then 1 else 0) }
function {:inline} $sge.i24.bool(i1: i24, i2: i24) returns (bool) { (i1 >= i2) }
function {:inline} $sge.i24(i1: i24, i2: i24) returns (i1) { (if $sge.i24.bool(i1, i2) then 1 else 0) }
function {:inline} $sge.i32.bool(i1: i32, i2: i32) returns (bool) { (i1 >= i2) }
function {:inline} $sge.i32(i1: i32, i2: i32) returns (i1) { (if $sge.i32.bool(i1, i2) then 1 else 0) }
function {:inline} $sge.i40.bool(i1: i40, i2: i40) returns (bool) { (i1 >= i2) }
function {:inline} $sge.i40(i1: i40, i2: i40) returns (i1) { (if $sge.i40.bool(i1, i2) then 1 else 0) }
function {:inline} $sge.i48.bool(i1: i48, i2: i48) returns (bool) { (i1 >= i2) }
function {:inline} $sge.i48(i1: i48, i2: i48) returns (i1) { (if $sge.i48.bool(i1, i2) then 1 else 0) }
function {:inline} $sge.i56.bool(i1: i56, i2: i56) returns (bool) { (i1 >= i2) }
function {:inline} $sge.i56(i1: i56, i2: i56) returns (i1) { (if $sge.i56.bool(i1, i2) then 1 else 0) }
function {:inline} $sge.i64.bool(i1: i64, i2: i64) returns (bool) { (i1 >= i2) }
function {:inline} $sge.i64(i1: i64, i2: i64) returns (i1) { (if $sge.i64.bool(i1, i2) then 1 else 0) }
function {:inline} $sge.i80.bool(i1: i80, i2: i80) returns (bool) { (i1 >= i2) }
function {:inline} $sge.i80(i1: i80, i2: i80) returns (i1) { (if $sge.i80.bool(i1, i2) then 1 else 0) }
function {:inline} $sge.i88.bool(i1: i88, i2: i88) returns (bool) { (i1 >= i2) }
function {:inline} $sge.i88(i1: i88, i2: i88) returns (i1) { (if $sge.i88.bool(i1, i2) then 1 else 0) }
function {:inline} $sge.i96.bool(i1: i96, i2: i96) returns (bool) { (i1 >= i2) }
function {:inline} $sge.i96(i1: i96, i2: i96) returns (i1) { (if $sge.i96.bool(i1, i2) then 1 else 0) }
function {:inline} $sge.i128.bool(i1: i128, i2: i128) returns (bool) { (i1 >= i2) }
function {:inline} $sge.i128(i1: i128, i2: i128) returns (i1) { (if $sge.i128.bool(i1, i2) then 1 else 0) }
function {:inline} $sge.i160.bool(i1: i160, i2: i160) returns (bool) { (i1 >= i2) }
function {:inline} $sge.i160(i1: i160, i2: i160) returns (i1) { (if $sge.i160.bool(i1, i2) then 1 else 0) }
function {:inline} $sge.i256.bool(i1: i256, i2: i256) returns (bool) { (i1 >= i2) }
function {:inline} $sge.i256(i1: i256, i2: i256) returns (i1) { (if $sge.i256.bool(i1, i2) then 1 else 0) }
function {:inline} $sgt.i1.bool(i1: i1, i2: i1) returns (bool) { (i1 > i2) }
function {:inline} $sgt.i1(i1: i1, i2: i1) returns (i1) { (if $sgt.i1.bool(i1, i2) then 1 else 0) }
function {:inline} $sgt.i5.bool(i1: i5, i2: i5) returns (bool) { (i1 > i2) }
function {:inline} $sgt.i5(i1: i5, i2: i5) returns (i1) { (if $sgt.i5.bool(i1, i2) then 1 else 0) }
function {:inline} $sgt.i6.bool(i1: i6, i2: i6) returns (bool) { (i1 > i2) }
function {:inline} $sgt.i6(i1: i6, i2: i6) returns (i1) { (if $sgt.i6.bool(i1, i2) then 1 else 0) }
function {:inline} $sgt.i8.bool(i1: i8, i2: i8) returns (bool) { (i1 > i2) }
function {:inline} $sgt.i8(i1: i8, i2: i8) returns (i1) { (if $sgt.i8.bool(i1, i2) then 1 else 0) }
function {:inline} $sgt.i16.bool(i1: i16, i2: i16) returns (bool) { (i1 > i2) }
function {:inline} $sgt.i16(i1: i16, i2: i16) returns (i1) { (if $sgt.i16.bool(i1, i2) then 1 else 0) }
function {:inline} $sgt.i24.bool(i1: i24, i2: i24) returns (bool) { (i1 > i2) }
function {:inline} $sgt.i24(i1: i24, i2: i24) returns (i1) { (if $sgt.i24.bool(i1, i2) then 1 else 0) }
function {:inline} $sgt.i32.bool(i1: i32, i2: i32) returns (bool) { (i1 > i2) }
function {:inline} $sgt.i32(i1: i32, i2: i32) returns (i1) { (if $sgt.i32.bool(i1, i2) then 1 else 0) }
function {:inline} $sgt.i40.bool(i1: i40, i2: i40) returns (bool) { (i1 > i2) }
function {:inline} $sgt.i40(i1: i40, i2: i40) returns (i1) { (if $sgt.i40.bool(i1, i2) then 1 else 0) }
function {:inline} $sgt.i48.bool(i1: i48, i2: i48) returns (bool) { (i1 > i2) }
function {:inline} $sgt.i48(i1: i48, i2: i48) returns (i1) { (if $sgt.i48.bool(i1, i2) then 1 else 0) }
function {:inline} $sgt.i56.bool(i1: i56, i2: i56) returns (bool) { (i1 > i2) }
function {:inline} $sgt.i56(i1: i56, i2: i56) returns (i1) { (if $sgt.i56.bool(i1, i2) then 1 else 0) }
function {:inline} $sgt.i64.bool(i1: i64, i2: i64) returns (bool) { (i1 > i2) }
function {:inline} $sgt.i64(i1: i64, i2: i64) returns (i1) { (if $sgt.i64.bool(i1, i2) then 1 else 0) }
function {:inline} $sgt.i80.bool(i1: i80, i2: i80) returns (bool) { (i1 > i2) }
function {:inline} $sgt.i80(i1: i80, i2: i80) returns (i1) { (if $sgt.i80.bool(i1, i2) then 1 else 0) }
function {:inline} $sgt.i88.bool(i1: i88, i2: i88) returns (bool) { (i1 > i2) }
function {:inline} $sgt.i88(i1: i88, i2: i88) returns (i1) { (if $sgt.i88.bool(i1, i2) then 1 else 0) }
function {:inline} $sgt.i96.bool(i1: i96, i2: i96) returns (bool) { (i1 > i2) }
function {:inline} $sgt.i96(i1: i96, i2: i96) returns (i1) { (if $sgt.i96.bool(i1, i2) then 1 else 0) }
function {:inline} $sgt.i128.bool(i1: i128, i2: i128) returns (bool) { (i1 > i2) }
function {:inline} $sgt.i128(i1: i128, i2: i128) returns (i1) { (if $sgt.i128.bool(i1, i2) then 1 else 0) }
function {:inline} $sgt.i160.bool(i1: i160, i2: i160) returns (bool) { (i1 > i2) }
function {:inline} $sgt.i160(i1: i160, i2: i160) returns (i1) { (if $sgt.i160.bool(i1, i2) then 1 else 0) }
function {:inline} $sgt.i256.bool(i1: i256, i2: i256) returns (bool) { (i1 > i2) }
function {:inline} $sgt.i256(i1: i256, i2: i256) returns (i1) { (if $sgt.i256.bool(i1, i2) then 1 else 0) }
function {:inline} $eq.i1.bool(i1: i1, i2: i1) returns (bool) { (i1 == i2) }
function {:inline} $eq.i1(i1: i1, i2: i1) returns (i1) { (if $eq.i1.bool(i1, i2) then 1 else 0) }
function {:inline} $eq.i5.bool(i1: i5, i2: i5) returns (bool) { (i1 == i2) }
function {:inline} $eq.i5(i1: i5, i2: i5) returns (i1) { (if $eq.i5.bool(i1, i2) then 1 else 0) }
function {:inline} $eq.i6.bool(i1: i6, i2: i6) returns (bool) { (i1 == i2) }
function {:inline} $eq.i6(i1: i6, i2: i6) returns (i1) { (if $eq.i6.bool(i1, i2) then 1 else 0) }
function {:inline} $eq.i8.bool(i1: i8, i2: i8) returns (bool) { (i1 == i2) }
function {:inline} $eq.i8(i1: i8, i2: i8) returns (i1) { (if $eq.i8.bool(i1, i2) then 1 else 0) }
function {:inline} $eq.i16.bool(i1: i16, i2: i16) returns (bool) { (i1 == i2) }
function {:inline} $eq.i16(i1: i16, i2: i16) returns (i1) { (if $eq.i16.bool(i1, i2) then 1 else 0) }
function {:inline} $eq.i24.bool(i1: i24, i2: i24) returns (bool) { (i1 == i2) }
function {:inline} $eq.i24(i1: i24, i2: i24) returns (i1) { (if $eq.i24.bool(i1, i2) then 1 else 0) }
function {:inline} $eq.i32.bool(i1: i32, i2: i32) returns (bool) { (i1 == i2) }
function {:inline} $eq.i32(i1: i32, i2: i32) returns (i1) { (if $eq.i32.bool(i1, i2) then 1 else 0) }
function {:inline} $eq.i40.bool(i1: i40, i2: i40) returns (bool) { (i1 == i2) }
function {:inline} $eq.i40(i1: i40, i2: i40) returns (i1) { (if $eq.i40.bool(i1, i2) then 1 else 0) }
function {:inline} $eq.i48.bool(i1: i48, i2: i48) returns (bool) { (i1 == i2) }
function {:inline} $eq.i48(i1: i48, i2: i48) returns (i1) { (if $eq.i48.bool(i1, i2) then 1 else 0) }
function {:inline} $eq.i56.bool(i1: i56, i2: i56) returns (bool) { (i1 == i2) }
function {:inline} $eq.i56(i1: i56, i2: i56) returns (i1) { (if $eq.i56.bool(i1, i2) then 1 else 0) }
function {:inline} $eq.i64.bool(i1: i64, i2: i64) returns (bool) { (i1 == i2) }
function {:inline} $eq.i64(i1: i64, i2: i64) returns (i1) { (if $eq.i64.bool(i1, i2) then 1 else 0) }
function {:inline} $eq.i80.bool(i1: i80, i2: i80) returns (bool) { (i1 == i2) }
function {:inline} $eq.i80(i1: i80, i2: i80) returns (i1) { (if $eq.i80.bool(i1, i2) then 1 else 0) }
function {:inline} $eq.i88.bool(i1: i88, i2: i88) returns (bool) { (i1 == i2) }
function {:inline} $eq.i88(i1: i88, i2: i88) returns (i1) { (if $eq.i88.bool(i1, i2) then 1 else 0) }
function {:inline} $eq.i96.bool(i1: i96, i2: i96) returns (bool) { (i1 == i2) }
function {:inline} $eq.i96(i1: i96, i2: i96) returns (i1) { (if $eq.i96.bool(i1, i2) then 1 else 0) }
function {:inline} $eq.i128.bool(i1: i128, i2: i128) returns (bool) { (i1 == i2) }
function {:inline} $eq.i128(i1: i128, i2: i128) returns (i1) { (if $eq.i128.bool(i1, i2) then 1 else 0) }
function {:inline} $eq.i160.bool(i1: i160, i2: i160) returns (bool) { (i1 == i2) }
function {:inline} $eq.i160(i1: i160, i2: i160) returns (i1) { (if $eq.i160.bool(i1, i2) then 1 else 0) }
function {:inline} $eq.i256.bool(i1: i256, i2: i256) returns (bool) { (i1 == i2) }
function {:inline} $eq.i256(i1: i256, i2: i256) returns (i1) { (if $eq.i256.bool(i1, i2) then 1 else 0) }
function {:inline} $ne.i1.bool(i1: i1, i2: i1) returns (bool) { (i1 != i2) }
function {:inline} $ne.i1(i1: i1, i2: i1) returns (i1) { (if $ne.i1.bool(i1, i2) then 1 else 0) }
function {:inline} $ne.i5.bool(i1: i5, i2: i5) returns (bool) { (i1 != i2) }
function {:inline} $ne.i5(i1: i5, i2: i5) returns (i1) { (if $ne.i5.bool(i1, i2) then 1 else 0) }
function {:inline} $ne.i6.bool(i1: i6, i2: i6) returns (bool) { (i1 != i2) }
function {:inline} $ne.i6(i1: i6, i2: i6) returns (i1) { (if $ne.i6.bool(i1, i2) then 1 else 0) }
function {:inline} $ne.i8.bool(i1: i8, i2: i8) returns (bool) { (i1 != i2) }
function {:inline} $ne.i8(i1: i8, i2: i8) returns (i1) { (if $ne.i8.bool(i1, i2) then 1 else 0) }
function {:inline} $ne.i16.bool(i1: i16, i2: i16) returns (bool) { (i1 != i2) }
function {:inline} $ne.i16(i1: i16, i2: i16) returns (i1) { (if $ne.i16.bool(i1, i2) then 1 else 0) }
function {:inline} $ne.i24.bool(i1: i24, i2: i24) returns (bool) { (i1 != i2) }
function {:inline} $ne.i24(i1: i24, i2: i24) returns (i1) { (if $ne.i24.bool(i1, i2) then 1 else 0) }
function {:inline} $ne.i32.bool(i1: i32, i2: i32) returns (bool) { (i1 != i2) }
function {:inline} $ne.i32(i1: i32, i2: i32) returns (i1) { (if $ne.i32.bool(i1, i2) then 1 else 0) }
function {:inline} $ne.i40.bool(i1: i40, i2: i40) returns (bool) { (i1 != i2) }
function {:inline} $ne.i40(i1: i40, i2: i40) returns (i1) { (if $ne.i40.bool(i1, i2) then 1 else 0) }
function {:inline} $ne.i48.bool(i1: i48, i2: i48) returns (bool) { (i1 != i2) }
function {:inline} $ne.i48(i1: i48, i2: i48) returns (i1) { (if $ne.i48.bool(i1, i2) then 1 else 0) }
function {:inline} $ne.i56.bool(i1: i56, i2: i56) returns (bool) { (i1 != i2) }
function {:inline} $ne.i56(i1: i56, i2: i56) returns (i1) { (if $ne.i56.bool(i1, i2) then 1 else 0) }
function {:inline} $ne.i64.bool(i1: i64, i2: i64) returns (bool) { (i1 != i2) }
function {:inline} $ne.i64(i1: i64, i2: i64) returns (i1) { (if $ne.i64.bool(i1, i2) then 1 else 0) }
function {:inline} $ne.i80.bool(i1: i80, i2: i80) returns (bool) { (i1 != i2) }
function {:inline} $ne.i80(i1: i80, i2: i80) returns (i1) { (if $ne.i80.bool(i1, i2) then 1 else 0) }
function {:inline} $ne.i88.bool(i1: i88, i2: i88) returns (bool) { (i1 != i2) }
function {:inline} $ne.i88(i1: i88, i2: i88) returns (i1) { (if $ne.i88.bool(i1, i2) then 1 else 0) }
function {:inline} $ne.i96.bool(i1: i96, i2: i96) returns (bool) { (i1 != i2) }
function {:inline} $ne.i96(i1: i96, i2: i96) returns (i1) { (if $ne.i96.bool(i1, i2) then 1 else 0) }
function {:inline} $ne.i128.bool(i1: i128, i2: i128) returns (bool) { (i1 != i2) }
function {:inline} $ne.i128(i1: i128, i2: i128) returns (i1) { (if $ne.i128.bool(i1, i2) then 1 else 0) }
function {:inline} $ne.i160.bool(i1: i160, i2: i160) returns (bool) { (i1 != i2) }
function {:inline} $ne.i160(i1: i160, i2: i160) returns (i1) { (if $ne.i160.bool(i1, i2) then 1 else 0) }
function {:inline} $ne.i256.bool(i1: i256, i2: i256) returns (bool) { (i1 != i2) }
function {:inline} $ne.i256(i1: i256, i2: i256) returns (i1) { (if $ne.i256.bool(i1, i2) then 1 else 0) }
// Integer load/store operations
function {:inline} $load.i1(M: [ref] i1, p: ref) returns (i1) { M[p] }
function {:inline} $store.i1(M: [ref] i1, p: ref, i: i1) returns ([ref] i1) { M[p := i] }
function {:inline} $load.i5(M: [ref] i5, p: ref) returns (i5) { M[p] }
function {:inline} $store.i5(M: [ref] i5, p: ref, i: i5) returns ([ref] i5) { M[p := i] }
function {:inline} $load.i6(M: [ref] i6, p: ref) returns (i6) { M[p] }
function {:inline} $store.i6(M: [ref] i6, p: ref, i: i6) returns ([ref] i6) { M[p := i] }
function {:inline} $load.i8(M: [ref] i8, p: ref) returns (i8) { M[p] }
function {:inline} $store.i8(M: [ref] i8, p: ref, i: i8) returns ([ref] i8) { M[p := i] }
function {:inline} $load.i16(M: [ref] i16, p: ref) returns (i16) { M[p] }
function {:inline} $store.i16(M: [ref] i16, p: ref, i: i16) returns ([ref] i16) { M[p := i] }
function {:inline} $load.i24(M: [ref] i24, p: ref) returns (i24) { M[p] }
function {:inline} $store.i24(M: [ref] i24, p: ref, i: i24) returns ([ref] i24) { M[p := i] }
function {:inline} $load.i32(M: [ref] i32, p: ref) returns (i32) { M[p] }
function {:inline} $store.i32(M: [ref] i32, p: ref, i: i32) returns ([ref] i32) { M[p := i] }
function {:inline} $load.i40(M: [ref] i40, p: ref) returns (i40) { M[p] }
function {:inline} $store.i40(M: [ref] i40, p: ref, i: i40) returns ([ref] i40) { M[p := i] }
function {:inline} $load.i48(M: [ref] i48, p: ref) returns (i48) { M[p] }
function {:inline} $store.i48(M: [ref] i48, p: ref, i: i48) returns ([ref] i48) { M[p := i] }
function {:inline} $load.i56(M: [ref] i56, p: ref) returns (i56) { M[p] }
function {:inline} $store.i56(M: [ref] i56, p: ref, i: i56) returns ([ref] i56) { M[p := i] }
function {:inline} $load.i64(M: [ref] i64, p: ref) returns (i64) { M[p] }
function {:inline} $store.i64(M: [ref] i64, p: ref, i: i64) returns ([ref] i64) { M[p := i] }
function {:inline} $load.i80(M: [ref] i80, p: ref) returns (i80) { M[p] }
function {:inline} $store.i80(M: [ref] i80, p: ref, i: i80) returns ([ref] i80) { M[p := i] }
function {:inline} $load.i88(M: [ref] i88, p: ref) returns (i88) { M[p] }
function {:inline} $store.i88(M: [ref] i88, p: ref, i: i88) returns ([ref] i88) { M[p := i] }
function {:inline} $load.i96(M: [ref] i96, p: ref) returns (i96) { M[p] }
function {:inline} $store.i96(M: [ref] i96, p: ref, i: i96) returns ([ref] i96) { M[p := i] }
function {:inline} $load.i128(M: [ref] i128, p: ref) returns (i128) { M[p] }
function {:inline} $store.i128(M: [ref] i128, p: ref, i: i128) returns ([ref] i128) { M[p := i] }
function {:inline} $load.i160(M: [ref] i160, p: ref) returns (i160) { M[p] }
function {:inline} $store.i160(M: [ref] i160, p: ref, i: i160) returns ([ref] i160) { M[p := i] }
function {:inline} $load.i256(M: [ref] i256, p: ref) returns (i256) { M[p] }
function {:inline} $store.i256(M: [ref] i256, p: ref, i: i256) returns ([ref] i256) { M[p := i] }
// Conversion between integer types
function {:inline} $trunc.i5.i1(i: i5) returns (i1) { i }
function {:inline} $trunc.i6.i1(i: i6) returns (i1) { i }
function {:inline} $trunc.i8.i1(i: i8) returns (i1) { i }
function {:inline} $trunc.i16.i1(i: i16) returns (i1) { i }
function {:inline} $trunc.i24.i1(i: i24) returns (i1) { i }
function {:inline} $trunc.i32.i1(i: i32) returns (i1) { i }
function {:inline} $trunc.i40.i1(i: i40) returns (i1) { i }
function {:inline} $trunc.i48.i1(i: i48) returns (i1) { i }
function {:inline} $trunc.i56.i1(i: i56) returns (i1) { i }
function {:inline} $trunc.i64.i1(i: i64) returns (i1) { i }
function {:inline} $trunc.i80.i1(i: i80) returns (i1) { i }
function {:inline} $trunc.i88.i1(i: i88) returns (i1) { i }
function {:inline} $trunc.i96.i1(i: i96) returns (i1) { i }
function {:inline} $trunc.i128.i1(i: i128) returns (i1) { i }
function {:inline} $trunc.i160.i1(i: i160) returns (i1) { i }
function {:inline} $trunc.i256.i1(i: i256) returns (i1) { i }
function {:inline} $trunc.i6.i5(i: i6) returns (i5) { i }
function {:inline} $trunc.i8.i5(i: i8) returns (i5) { i }
function {:inline} $trunc.i16.i5(i: i16) returns (i5) { i }
function {:inline} $trunc.i24.i5(i: i24) returns (i5) { i }
function {:inline} $trunc.i32.i5(i: i32) returns (i5) { i }
function {:inline} $trunc.i40.i5(i: i40) returns (i5) { i }
function {:inline} $trunc.i48.i5(i: i48) returns (i5) { i }
function {:inline} $trunc.i56.i5(i: i56) returns (i5) { i }
function {:inline} $trunc.i64.i5(i: i64) returns (i5) { i }
function {:inline} $trunc.i80.i5(i: i80) returns (i5) { i }
function {:inline} $trunc.i88.i5(i: i88) returns (i5) { i }
function {:inline} $trunc.i96.i5(i: i96) returns (i5) { i }
function {:inline} $trunc.i128.i5(i: i128) returns (i5) { i }
function {:inline} $trunc.i160.i5(i: i160) returns (i5) { i }
function {:inline} $trunc.i256.i5(i: i256) returns (i5) { i }
function {:inline} $trunc.i8.i6(i: i8) returns (i6) { i }
function {:inline} $trunc.i16.i6(i: i16) returns (i6) { i }
function {:inline} $trunc.i24.i6(i: i24) returns (i6) { i }
function {:inline} $trunc.i32.i6(i: i32) returns (i6) { i }
function {:inline} $trunc.i40.i6(i: i40) returns (i6) { i }
function {:inline} $trunc.i48.i6(i: i48) returns (i6) { i }
function {:inline} $trunc.i56.i6(i: i56) returns (i6) { i }
function {:inline} $trunc.i64.i6(i: i64) returns (i6) { i }
function {:inline} $trunc.i80.i6(i: i80) returns (i6) { i }
function {:inline} $trunc.i88.i6(i: i88) returns (i6) { i }
function {:inline} $trunc.i96.i6(i: i96) returns (i6) { i }
function {:inline} $trunc.i128.i6(i: i128) returns (i6) { i }
function {:inline} $trunc.i160.i6(i: i160) returns (i6) { i }
function {:inline} $trunc.i256.i6(i: i256) returns (i6) { i }
function {:inline} $trunc.i16.i8(i: i16) returns (i8) { i }
function {:inline} $trunc.i24.i8(i: i24) returns (i8) { i }
function {:inline} $trunc.i32.i8(i: i32) returns (i8) { i }
function {:inline} $trunc.i40.i8(i: i40) returns (i8) { i }
function {:inline} $trunc.i48.i8(i: i48) returns (i8) { i }
function {:inline} $trunc.i56.i8(i: i56) returns (i8) { i }
function {:inline} $trunc.i64.i8(i: i64) returns (i8) { i }
function {:inline} $trunc.i80.i8(i: i80) returns (i8) { i }
function {:inline} $trunc.i88.i8(i: i88) returns (i8) { i }
function {:inline} $trunc.i96.i8(i: i96) returns (i8) { i }
function {:inline} $trunc.i128.i8(i: i128) returns (i8) { i }
function {:inline} $trunc.i160.i8(i: i160) returns (i8) { i }
function {:inline} $trunc.i256.i8(i: i256) returns (i8) { i }
function {:inline} $trunc.i24.i16(i: i24) returns (i16) { i }
function {:inline} $trunc.i32.i16(i: i32) returns (i16) { i }
function {:inline} $trunc.i40.i16(i: i40) returns (i16) { i }
function {:inline} $trunc.i48.i16(i: i48) returns (i16) { i }
function {:inline} $trunc.i56.i16(i: i56) returns (i16) { i }
function {:inline} $trunc.i64.i16(i: i64) returns (i16) { i }
function {:inline} $trunc.i80.i16(i: i80) returns (i16) { i }
function {:inline} $trunc.i88.i16(i: i88) returns (i16) { i }
function {:inline} $trunc.i96.i16(i: i96) returns (i16) { i }
function {:inline} $trunc.i128.i16(i: i128) returns (i16) { i }
function {:inline} $trunc.i160.i16(i: i160) returns (i16) { i }
function {:inline} $trunc.i256.i16(i: i256) returns (i16) { i }
function {:inline} $trunc.i32.i24(i: i32) returns (i24) { i }
function {:inline} $trunc.i40.i24(i: i40) returns (i24) { i }
function {:inline} $trunc.i48.i24(i: i48) returns (i24) { i }
function {:inline} $trunc.i56.i24(i: i56) returns (i24) { i }
function {:inline} $trunc.i64.i24(i: i64) returns (i24) { i }
function {:inline} $trunc.i80.i24(i: i80) returns (i24) { i }
function {:inline} $trunc.i88.i24(i: i88) returns (i24) { i }
function {:inline} $trunc.i96.i24(i: i96) returns (i24) { i }
function {:inline} $trunc.i128.i24(i: i128) returns (i24) { i }
function {:inline} $trunc.i160.i24(i: i160) returns (i24) { i }
function {:inline} $trunc.i256.i24(i: i256) returns (i24) { i }
function {:inline} $trunc.i40.i32(i: i40) returns (i32) { i }
function {:inline} $trunc.i48.i32(i: i48) returns (i32) { i }
function {:inline} $trunc.i56.i32(i: i56) returns (i32) { i }
function {:inline} $trunc.i64.i32(i: i64) returns (i32) { i }
function {:inline} $trunc.i80.i32(i: i80) returns (i32) { i }
function {:inline} $trunc.i88.i32(i: i88) returns (i32) { i }
function {:inline} $trunc.i96.i32(i: i96) returns (i32) { i }
function {:inline} $trunc.i128.i32(i: i128) returns (i32) { i }
function {:inline} $trunc.i160.i32(i: i160) returns (i32) { i }
function {:inline} $trunc.i256.i32(i: i256) returns (i32) { i }
function {:inline} $trunc.i48.i40(i: i48) returns (i40) { i }
function {:inline} $trunc.i56.i40(i: i56) returns (i40) { i }
function {:inline} $trunc.i64.i40(i: i64) returns (i40) { i }
function {:inline} $trunc.i80.i40(i: i80) returns (i40) { i }
function {:inline} $trunc.i88.i40(i: i88) returns (i40) { i }
function {:inline} $trunc.i96.i40(i: i96) returns (i40) { i }
function {:inline} $trunc.i128.i40(i: i128) returns (i40) { i }
function {:inline} $trunc.i160.i40(i: i160) returns (i40) { i }
function {:inline} $trunc.i256.i40(i: i256) returns (i40) { i }
function {:inline} $trunc.i56.i48(i: i56) returns (i48) { i }
function {:inline} $trunc.i64.i48(i: i64) returns (i48) { i }
function {:inline} $trunc.i80.i48(i: i80) returns (i48) { i }
function {:inline} $trunc.i88.i48(i: i88) returns (i48) { i }
function {:inline} $trunc.i96.i48(i: i96) returns (i48) { i }
function {:inline} $trunc.i128.i48(i: i128) returns (i48) { i }
function {:inline} $trunc.i160.i48(i: i160) returns (i48) { i }
function {:inline} $trunc.i256.i48(i: i256) returns (i48) { i }
function {:inline} $trunc.i64.i56(i: i64) returns (i56) { i }
function {:inline} $trunc.i80.i56(i: i80) returns (i56) { i }
function {:inline} $trunc.i88.i56(i: i88) returns (i56) { i }
function {:inline} $trunc.i96.i56(i: i96) returns (i56) { i }
function {:inline} $trunc.i128.i56(i: i128) returns (i56) { i }
function {:inline} $trunc.i160.i56(i: i160) returns (i56) { i }
function {:inline} $trunc.i256.i56(i: i256) returns (i56) { i }
function {:inline} $trunc.i80.i64(i: i80) returns (i64) { i }
function {:inline} $trunc.i88.i64(i: i88) returns (i64) { i }
function {:inline} $trunc.i96.i64(i: i96) returns (i64) { i }
function {:inline} $trunc.i128.i64(i: i128) returns (i64) { i }
function {:inline} $trunc.i160.i64(i: i160) returns (i64) { i }
function {:inline} $trunc.i256.i64(i: i256) returns (i64) { i }
function {:inline} $trunc.i88.i80(i: i88) returns (i80) { i }
function {:inline} $trunc.i96.i80(i: i96) returns (i80) { i }
function {:inline} $trunc.i128.i80(i: i128) returns (i80) { i }
function {:inline} $trunc.i160.i80(i: i160) returns (i80) { i }
function {:inline} $trunc.i256.i80(i: i256) returns (i80) { i }
function {:inline} $trunc.i96.i88(i: i96) returns (i88) { i }
function {:inline} $trunc.i128.i88(i: i128) returns (i88) { i }
function {:inline} $trunc.i160.i88(i: i160) returns (i88) { i }
function {:inline} $trunc.i256.i88(i: i256) returns (i88) { i }
function {:inline} $trunc.i128.i96(i: i128) returns (i96) { i }
function {:inline} $trunc.i160.i96(i: i160) returns (i96) { i }
function {:inline} $trunc.i256.i96(i: i256) returns (i96) { i }
function {:inline} $trunc.i160.i128(i: i160) returns (i128) { i }
function {:inline} $trunc.i256.i128(i: i256) returns (i128) { i }
function {:inline} $trunc.i256.i160(i: i256) returns (i160) { i }
function {:inline} $sext.i1.i5(i: i1) returns (i5) { i }
function {:inline} $sext.i1.i6(i: i1) returns (i6) { i }
function {:inline} $sext.i1.i8(i: i1) returns (i8) { i }
function {:inline} $sext.i1.i16(i: i1) returns (i16) { i }
function {:inline} $sext.i1.i24(i: i1) returns (i24) { i }
function {:inline} $sext.i1.i32(i: i1) returns (i32) { i }
function {:inline} $sext.i1.i40(i: i1) returns (i40) { i }
function {:inline} $sext.i1.i48(i: i1) returns (i48) { i }
function {:inline} $sext.i1.i56(i: i1) returns (i56) { i }
function {:inline} $sext.i1.i64(i: i1) returns (i64) { i }
function {:inline} $sext.i1.i80(i: i1) returns (i80) { i }
function {:inline} $sext.i1.i88(i: i1) returns (i88) { i }
function {:inline} $sext.i1.i96(i: i1) returns (i96) { i }
function {:inline} $sext.i1.i128(i: i1) returns (i128) { i }
function {:inline} $sext.i1.i160(i: i1) returns (i160) { i }
function {:inline} $sext.i1.i256(i: i1) returns (i256) { i }
function {:inline} $sext.i5.i6(i: i5) returns (i6) { i }
function {:inline} $sext.i5.i8(i: i5) returns (i8) { i }
function {:inline} $sext.i5.i16(i: i5) returns (i16) { i }
function {:inline} $sext.i5.i24(i: i5) returns (i24) { i }
function {:inline} $sext.i5.i32(i: i5) returns (i32) { i }
function {:inline} $sext.i5.i40(i: i5) returns (i40) { i }
function {:inline} $sext.i5.i48(i: i5) returns (i48) { i }
function {:inline} $sext.i5.i56(i: i5) returns (i56) { i }
function {:inline} $sext.i5.i64(i: i5) returns (i64) { i }
function {:inline} $sext.i5.i80(i: i5) returns (i80) { i }
function {:inline} $sext.i5.i88(i: i5) returns (i88) { i }
function {:inline} $sext.i5.i96(i: i5) returns (i96) { i }
function {:inline} $sext.i5.i128(i: i5) returns (i128) { i }
function {:inline} $sext.i5.i160(i: i5) returns (i160) { i }
function {:inline} $sext.i5.i256(i: i5) returns (i256) { i }
function {:inline} $sext.i6.i8(i: i6) returns (i8) { i }
function {:inline} $sext.i6.i16(i: i6) returns (i16) { i }
function {:inline} $sext.i6.i24(i: i6) returns (i24) { i }
function {:inline} $sext.i6.i32(i: i6) returns (i32) { i }
function {:inline} $sext.i6.i40(i: i6) returns (i40) { i }
function {:inline} $sext.i6.i48(i: i6) returns (i48) { i }
function {:inline} $sext.i6.i56(i: i6) returns (i56) { i }
function {:inline} $sext.i6.i64(i: i6) returns (i64) { i }
function {:inline} $sext.i6.i80(i: i6) returns (i80) { i }
function {:inline} $sext.i6.i88(i: i6) returns (i88) { i }
function {:inline} $sext.i6.i96(i: i6) returns (i96) { i }
function {:inline} $sext.i6.i128(i: i6) returns (i128) { i }
function {:inline} $sext.i6.i160(i: i6) returns (i160) { i }
function {:inline} $sext.i6.i256(i: i6) returns (i256) { i }
function {:inline} $sext.i8.i16(i: i8) returns (i16) { i }
function {:inline} $sext.i8.i24(i: i8) returns (i24) { i }
function {:inline} $sext.i8.i32(i: i8) returns (i32) { i }
function {:inline} $sext.i8.i40(i: i8) returns (i40) { i }
function {:inline} $sext.i8.i48(i: i8) returns (i48) { i }
function {:inline} $sext.i8.i56(i: i8) returns (i56) { i }
function {:inline} $sext.i8.i64(i: i8) returns (i64) { i }
function {:inline} $sext.i8.i80(i: i8) returns (i80) { i }
function {:inline} $sext.i8.i88(i: i8) returns (i88) { i }
function {:inline} $sext.i8.i96(i: i8) returns (i96) { i }
function {:inline} $sext.i8.i128(i: i8) returns (i128) { i }
function {:inline} $sext.i8.i160(i: i8) returns (i160) { i }
function {:inline} $sext.i8.i256(i: i8) returns (i256) { i }
function {:inline} $sext.i16.i24(i: i16) returns (i24) { i }
function {:inline} $sext.i16.i32(i: i16) returns (i32) { i }
function {:inline} $sext.i16.i40(i: i16) returns (i40) { i }
function {:inline} $sext.i16.i48(i: i16) returns (i48) { i }
function {:inline} $sext.i16.i56(i: i16) returns (i56) { i }
function {:inline} $sext.i16.i64(i: i16) returns (i64) { i }
function {:inline} $sext.i16.i80(i: i16) returns (i80) { i }
function {:inline} $sext.i16.i88(i: i16) returns (i88) { i }
function {:inline} $sext.i16.i96(i: i16) returns (i96) { i }
function {:inline} $sext.i16.i128(i: i16) returns (i128) { i }
function {:inline} $sext.i16.i160(i: i16) returns (i160) { i }
function {:inline} $sext.i16.i256(i: i16) returns (i256) { i }
function {:inline} $sext.i24.i32(i: i24) returns (i32) { i }
function {:inline} $sext.i24.i40(i: i24) returns (i40) { i }
function {:inline} $sext.i24.i48(i: i24) returns (i48) { i }
function {:inline} $sext.i24.i56(i: i24) returns (i56) { i }
function {:inline} $sext.i24.i64(i: i24) returns (i64) { i }
function {:inline} $sext.i24.i80(i: i24) returns (i80) { i }
function {:inline} $sext.i24.i88(i: i24) returns (i88) { i }
function {:inline} $sext.i24.i96(i: i24) returns (i96) { i }
function {:inline} $sext.i24.i128(i: i24) returns (i128) { i }
function {:inline} $sext.i24.i160(i: i24) returns (i160) { i }
function {:inline} $sext.i24.i256(i: i24) returns (i256) { i }
function {:inline} $sext.i32.i40(i: i32) returns (i40) { i }
function {:inline} $sext.i32.i48(i: i32) returns (i48) { i }
function {:inline} $sext.i32.i56(i: i32) returns (i56) { i }
function {:inline} $sext.i32.i64(i: i32) returns (i64) { i }
function {:inline} $sext.i32.i80(i: i32) returns (i80) { i }
function {:inline} $sext.i32.i88(i: i32) returns (i88) { i }
function {:inline} $sext.i32.i96(i: i32) returns (i96) { i }
function {:inline} $sext.i32.i128(i: i32) returns (i128) { i }
function {:inline} $sext.i32.i160(i: i32) returns (i160) { i }
function {:inline} $sext.i32.i256(i: i32) returns (i256) { i }
function {:inline} $sext.i40.i48(i: i40) returns (i48) { i }
function {:inline} $sext.i40.i56(i: i40) returns (i56) { i }
function {:inline} $sext.i40.i64(i: i40) returns (i64) { i }
function {:inline} $sext.i40.i80(i: i40) returns (i80) { i }
function {:inline} $sext.i40.i88(i: i40) returns (i88) { i }
function {:inline} $sext.i40.i96(i: i40) returns (i96) { i }
function {:inline} $sext.i40.i128(i: i40) returns (i128) { i }
function {:inline} $sext.i40.i160(i: i40) returns (i160) { i }
function {:inline} $sext.i40.i256(i: i40) returns (i256) { i }
function {:inline} $sext.i48.i56(i: i48) returns (i56) { i }
function {:inline} $sext.i48.i64(i: i48) returns (i64) { i }
function {:inline} $sext.i48.i80(i: i48) returns (i80) { i }
function {:inline} $sext.i48.i88(i: i48) returns (i88) { i }
function {:inline} $sext.i48.i96(i: i48) returns (i96) { i }
function {:inline} $sext.i48.i128(i: i48) returns (i128) { i }
function {:inline} $sext.i48.i160(i: i48) returns (i160) { i }
function {:inline} $sext.i48.i256(i: i48) returns (i256) { i }
function {:inline} $sext.i56.i64(i: i56) returns (i64) { i }
function {:inline} $sext.i56.i80(i: i56) returns (i80) { i }
function {:inline} $sext.i56.i88(i: i56) returns (i88) { i }
function {:inline} $sext.i56.i96(i: i56) returns (i96) { i }
function {:inline} $sext.i56.i128(i: i56) returns (i128) { i }
function {:inline} $sext.i56.i160(i: i56) returns (i160) { i }
function {:inline} $sext.i56.i256(i: i56) returns (i256) { i }
function {:inline} $sext.i64.i80(i: i64) returns (i80) { i }
function {:inline} $sext.i64.i88(i: i64) returns (i88) { i }
function {:inline} $sext.i64.i96(i: i64) returns (i96) { i }
function {:inline} $sext.i64.i128(i: i64) returns (i128) { i }
function {:inline} $sext.i64.i160(i: i64) returns (i160) { i }
function {:inline} $sext.i64.i256(i: i64) returns (i256) { i }
function {:inline} $sext.i80.i88(i: i80) returns (i88) { i }
function {:inline} $sext.i80.i96(i: i80) returns (i96) { i }
function {:inline} $sext.i80.i128(i: i80) returns (i128) { i }
function {:inline} $sext.i80.i160(i: i80) returns (i160) { i }
function {:inline} $sext.i80.i256(i: i80) returns (i256) { i }
function {:inline} $sext.i88.i96(i: i88) returns (i96) { i }
function {:inline} $sext.i88.i128(i: i88) returns (i128) { i }
function {:inline} $sext.i88.i160(i: i88) returns (i160) { i }
function {:inline} $sext.i88.i256(i: i88) returns (i256) { i }
function {:inline} $sext.i96.i128(i: i96) returns (i128) { i }
function {:inline} $sext.i96.i160(i: i96) returns (i160) { i }
function {:inline} $sext.i96.i256(i: i96) returns (i256) { i }
function {:inline} $sext.i128.i160(i: i128) returns (i160) { i }
function {:inline} $sext.i128.i256(i: i128) returns (i256) { i }
function {:inline} $sext.i160.i256(i: i160) returns (i256) { i }
function {:inline} $zext.i1.i5(i: i1) returns (i5) { i }
function {:inline} $zext.i1.i6(i: i1) returns (i6) { i }
function {:inline} $zext.i1.i8(i: i1) returns (i8) { i }
function {:inline} $zext.i1.i16(i: i1) returns (i16) { i }
function {:inline} $zext.i1.i24(i: i1) returns (i24) { i }
function {:inline} $zext.i1.i32(i: i1) returns (i32) { i }
function {:inline} $zext.i1.i40(i: i1) returns (i40) { i }
function {:inline} $zext.i1.i48(i: i1) returns (i48) { i }
function {:inline} $zext.i1.i56(i: i1) returns (i56) { i }
function {:inline} $zext.i1.i64(i: i1) returns (i64) { i }
function {:inline} $zext.i1.i80(i: i1) returns (i80) { i }
function {:inline} $zext.i1.i88(i: i1) returns (i88) { i }
function {:inline} $zext.i1.i96(i: i1) returns (i96) { i }
function {:inline} $zext.i1.i128(i: i1) returns (i128) { i }
function {:inline} $zext.i1.i160(i: i1) returns (i160) { i }
function {:inline} $zext.i1.i256(i: i1) returns (i256) { i }
function {:inline} $zext.i5.i6(i: i5) returns (i6) { i }
function {:inline} $zext.i5.i8(i: i5) returns (i8) { i }
function {:inline} $zext.i5.i16(i: i5) returns (i16) { i }
function {:inline} $zext.i5.i24(i: i5) returns (i24) { i }
function {:inline} $zext.i5.i32(i: i5) returns (i32) { i }
function {:inline} $zext.i5.i40(i: i5) returns (i40) { i }
function {:inline} $zext.i5.i48(i: i5) returns (i48) { i }
function {:inline} $zext.i5.i56(i: i5) returns (i56) { i }
function {:inline} $zext.i5.i64(i: i5) returns (i64) { i }
function {:inline} $zext.i5.i80(i: i5) returns (i80) { i }
function {:inline} $zext.i5.i88(i: i5) returns (i88) { i }
function {:inline} $zext.i5.i96(i: i5) returns (i96) { i }
function {:inline} $zext.i5.i128(i: i5) returns (i128) { i }
function {:inline} $zext.i5.i160(i: i5) returns (i160) { i }
function {:inline} $zext.i5.i256(i: i5) returns (i256) { i }
function {:inline} $zext.i6.i8(i: i6) returns (i8) { i }
function {:inline} $zext.i6.i16(i: i6) returns (i16) { i }
function {:inline} $zext.i6.i24(i: i6) returns (i24) { i }
function {:inline} $zext.i6.i32(i: i6) returns (i32) { i }
function {:inline} $zext.i6.i40(i: i6) returns (i40) { i }
function {:inline} $zext.i6.i48(i: i6) returns (i48) { i }
function {:inline} $zext.i6.i56(i: i6) returns (i56) { i }
function {:inline} $zext.i6.i64(i: i6) returns (i64) { i }
function {:inline} $zext.i6.i80(i: i6) returns (i80) { i }
function {:inline} $zext.i6.i88(i: i6) returns (i88) { i }
function {:inline} $zext.i6.i96(i: i6) returns (i96) { i }
function {:inline} $zext.i6.i128(i: i6) returns (i128) { i }
function {:inline} $zext.i6.i160(i: i6) returns (i160) { i }
function {:inline} $zext.i6.i256(i: i6) returns (i256) { i }
function {:inline} $zext.i8.i16(i: i8) returns (i16) { i }
function {:inline} $zext.i8.i24(i: i8) returns (i24) { i }
function {:inline} $zext.i8.i32(i: i8) returns (i32) { i }
function {:inline} $zext.i8.i40(i: i8) returns (i40) { i }
function {:inline} $zext.i8.i48(i: i8) returns (i48) { i }
function {:inline} $zext.i8.i56(i: i8) returns (i56) { i }
function {:inline} $zext.i8.i64(i: i8) returns (i64) { i }
function {:inline} $zext.i8.i80(i: i8) returns (i80) { i }
function {:inline} $zext.i8.i88(i: i8) returns (i88) { i }
function {:inline} $zext.i8.i96(i: i8) returns (i96) { i }
function {:inline} $zext.i8.i128(i: i8) returns (i128) { i }
function {:inline} $zext.i8.i160(i: i8) returns (i160) { i }
function {:inline} $zext.i8.i256(i: i8) returns (i256) { i }
function {:inline} $zext.i16.i24(i: i16) returns (i24) { i }
function {:inline} $zext.i16.i32(i: i16) returns (i32) { i }
function {:inline} $zext.i16.i40(i: i16) returns (i40) { i }
function {:inline} $zext.i16.i48(i: i16) returns (i48) { i }
function {:inline} $zext.i16.i56(i: i16) returns (i56) { i }
function {:inline} $zext.i16.i64(i: i16) returns (i64) { i }
function {:inline} $zext.i16.i80(i: i16) returns (i80) { i }
function {:inline} $zext.i16.i88(i: i16) returns (i88) { i }
function {:inline} $zext.i16.i96(i: i16) returns (i96) { i }
function {:inline} $zext.i16.i128(i: i16) returns (i128) { i }
function {:inline} $zext.i16.i160(i: i16) returns (i160) { i }
function {:inline} $zext.i16.i256(i: i16) returns (i256) { i }
function {:inline} $zext.i24.i32(i: i24) returns (i32) { i }
function {:inline} $zext.i24.i40(i: i24) returns (i40) { i }
function {:inline} $zext.i24.i48(i: i24) returns (i48) { i }
function {:inline} $zext.i24.i56(i: i24) returns (i56) { i }
function {:inline} $zext.i24.i64(i: i24) returns (i64) { i }
function {:inline} $zext.i24.i80(i: i24) returns (i80) { i }
function {:inline} $zext.i24.i88(i: i24) returns (i88) { i }
function {:inline} $zext.i24.i96(i: i24) returns (i96) { i }
function {:inline} $zext.i24.i128(i: i24) returns (i128) { i }
function {:inline} $zext.i24.i160(i: i24) returns (i160) { i }
function {:inline} $zext.i24.i256(i: i24) returns (i256) { i }
function {:inline} $zext.i32.i40(i: i32) returns (i40) { i }
function {:inline} $zext.i32.i48(i: i32) returns (i48) { i }
function {:inline} $zext.i32.i56(i: i32) returns (i56) { i }
function {:inline} $zext.i32.i64(i: i32) returns (i64) { i }
function {:inline} $zext.i32.i80(i: i32) returns (i80) { i }
function {:inline} $zext.i32.i88(i: i32) returns (i88) { i }
function {:inline} $zext.i32.i96(i: i32) returns (i96) { i }
function {:inline} $zext.i32.i128(i: i32) returns (i128) { i }
function {:inline} $zext.i32.i160(i: i32) returns (i160) { i }
function {:inline} $zext.i32.i256(i: i32) returns (i256) { i }
function {:inline} $zext.i40.i48(i: i40) returns (i48) { i }
function {:inline} $zext.i40.i56(i: i40) returns (i56) { i }
function {:inline} $zext.i40.i64(i: i40) returns (i64) { i }
function {:inline} $zext.i40.i80(i: i40) returns (i80) { i }
function {:inline} $zext.i40.i88(i: i40) returns (i88) { i }
function {:inline} $zext.i40.i96(i: i40) returns (i96) { i }
function {:inline} $zext.i40.i128(i: i40) returns (i128) { i }
function {:inline} $zext.i40.i160(i: i40) returns (i160) { i }
function {:inline} $zext.i40.i256(i: i40) returns (i256) { i }
function {:inline} $zext.i48.i56(i: i48) returns (i56) { i }
function {:inline} $zext.i48.i64(i: i48) returns (i64) { i }
function {:inline} $zext.i48.i80(i: i48) returns (i80) { i }
function {:inline} $zext.i48.i88(i: i48) returns (i88) { i }
function {:inline} $zext.i48.i96(i: i48) returns (i96) { i }
function {:inline} $zext.i48.i128(i: i48) returns (i128) { i }
function {:inline} $zext.i48.i160(i: i48) returns (i160) { i }
function {:inline} $zext.i48.i256(i: i48) returns (i256) { i }
function {:inline} $zext.i56.i64(i: i56) returns (i64) { i }
function {:inline} $zext.i56.i80(i: i56) returns (i80) { i }
function {:inline} $zext.i56.i88(i: i56) returns (i88) { i }
function {:inline} $zext.i56.i96(i: i56) returns (i96) { i }
function {:inline} $zext.i56.i128(i: i56) returns (i128) { i }
function {:inline} $zext.i56.i160(i: i56) returns (i160) { i }
function {:inline} $zext.i56.i256(i: i56) returns (i256) { i }
function {:inline} $zext.i64.i80(i: i64) returns (i80) { i }
function {:inline} $zext.i64.i88(i: i64) returns (i88) { i }
function {:inline} $zext.i64.i96(i: i64) returns (i96) { i }
function {:inline} $zext.i64.i128(i: i64) returns (i128) { i }
function {:inline} $zext.i64.i160(i: i64) returns (i160) { i }
function {:inline} $zext.i64.i256(i: i64) returns (i256) { i }
function {:inline} $zext.i80.i88(i: i80) returns (i88) { i }
function {:inline} $zext.i80.i96(i: i80) returns (i96) { i }
function {:inline} $zext.i80.i128(i: i80) returns (i128) { i }
function {:inline} $zext.i80.i160(i: i80) returns (i160) { i }
function {:inline} $zext.i80.i256(i: i80) returns (i256) { i }
function {:inline} $zext.i88.i96(i: i88) returns (i96) { i }
function {:inline} $zext.i88.i128(i: i88) returns (i128) { i }
function {:inline} $zext.i88.i160(i: i88) returns (i160) { i }
function {:inline} $zext.i88.i256(i: i88) returns (i256) { i }
function {:inline} $zext.i96.i128(i: i96) returns (i128) { i }
function {:inline} $zext.i96.i160(i: i96) returns (i160) { i }
function {:inline} $zext.i96.i256(i: i96) returns (i256) { i }
function {:inline} $zext.i128.i160(i: i128) returns (i160) { i }
function {:inline} $zext.i128.i256(i: i128) returns (i256) { i }
function {:inline} $zext.i160.i256(i: i160) returns (i256) { i }
function $extractvalue.i1(p: ref, i: int) returns (i1);
function $extractvalue.i5(p: ref, i: int) returns (i5);
function $extractvalue.i6(p: ref, i: int) returns (i6);
function $extractvalue.i8(p: ref, i: int) returns (i8);
function $extractvalue.i16(p: ref, i: int) returns (i16);
function $extractvalue.i24(p: ref, i: int) returns (i24);
function $extractvalue.i32(p: ref, i: int) returns (i32);
function $extractvalue.i40(p: ref, i: int) returns (i40);
function $extractvalue.i48(p: ref, i: int) returns (i48);
function $extractvalue.i56(p: ref, i: int) returns (i56);
function $extractvalue.i64(p: ref, i: int) returns (i64);
function $extractvalue.i80(p: ref, i: int) returns (i80);
function $extractvalue.i88(p: ref, i: int) returns (i88);
function $extractvalue.i96(p: ref, i: int) returns (i96);
function $extractvalue.i128(p: ref, i: int) returns (i128);
function $extractvalue.i160(p: ref, i: int) returns (i160);
function $extractvalue.i256(p: ref, i: int) returns (i256);
// Pointer arithmetic operations
function {:inline} $add.ref(p1: ref, p2: ref) returns (ref) { $add.i64(p1, p2) }
function {:inline} $sub.ref(p1: ref, p2: ref) returns (ref) { $sub.i64(p1, p2) }
function {:inline} $mul.ref(p1: ref, p2: ref) returns (ref) { $mul.i64(p1, p2) }

// Pointer predicates
function {:inline} $eq.ref(p1: ref, p2: ref) returns (i1) { (if $eq.i64.bool(p1, p2) then 1 else 0) }
function {:inline} $eq.ref.bool(p1: ref, p2: ref) returns (bool) { $eq.i64.bool(p1, p2) }
function {:inline} $ne.ref(p1: ref, p2: ref) returns (i1) { (if $ne.i64.bool(p1, p2) then 1 else 0) }
function {:inline} $ne.ref.bool(p1: ref, p2: ref) returns (bool) { $ne.i64.bool(p1, p2) }
function {:inline} $ugt.ref(p1: ref, p2: ref) returns (i1) { (if $ugt.i64.bool(p1, p2) then 1 else 0) }
function {:inline} $ugt.ref.bool(p1: ref, p2: ref) returns (bool) { $ugt.i64.bool(p1, p2) }
function {:inline} $uge.ref(p1: ref, p2: ref) returns (i1) { (if $uge.i64.bool(p1, p2) then 1 else 0) }
function {:inline} $uge.ref.bool(p1: ref, p2: ref) returns (bool) { $uge.i64.bool(p1, p2) }
function {:inline} $ult.ref(p1: ref, p2: ref) returns (i1) { (if $ult.i64.bool(p1, p2) then 1 else 0) }
function {:inline} $ult.ref.bool(p1: ref, p2: ref) returns (bool) { $ult.i64.bool(p1, p2) }
function {:inline} $ule.ref(p1: ref, p2: ref) returns (i1) { (if $ule.i64.bool(p1, p2) then 1 else 0) }
function {:inline} $ule.ref.bool(p1: ref, p2: ref) returns (bool) { $ule.i64.bool(p1, p2) }
function {:inline} $sgt.ref(p1: ref, p2: ref) returns (i1) { (if $sgt.i64.bool(p1, p2) then 1 else 0) }
function {:inline} $sgt.ref.bool(p1: ref, p2: ref) returns (bool) { $sgt.i64.bool(p1, p2) }
function {:inline} $sge.ref(p1: ref, p2: ref) returns (i1) { (if $sge.i64.bool(p1, p2) then 1 else 0) }
function {:inline} $sge.ref.bool(p1: ref, p2: ref) returns (bool) { $sge.i64.bool(p1, p2) }
function {:inline} $slt.ref(p1: ref, p2: ref) returns (i1) { (if $slt.i64.bool(p1, p2) then 1 else 0) }
function {:inline} $slt.ref.bool(p1: ref, p2: ref) returns (bool) { $slt.i64.bool(p1, p2) }
function {:inline} $sle.ref(p1: ref, p2: ref) returns (i1) { (if $sle.i64.bool(p1, p2) then 1 else 0) }
function {:inline} $sle.ref.bool(p1: ref, p2: ref) returns (bool) { $sle.i64.bool(p1, p2) }

// Pointer load/store operations
function {:inline} $load.ref(M: [ref] ref, p: ref) returns (ref) { M[p] }
function {:inline} $store.ref(M: [ref] ref, p: ref, i: ref) returns ([ref] ref) { M[p := i] }

// Pointer conversion
function {:inline} $bitcast.ref.ref(p: ref) returns (ref) { p }
function $extractvalue.ref(p: ref, i: int) returns (ref);
// Pointer-number conversion
function {:inline} $p2i.ref.i8(p: ref) returns (i8) { $trunc.i64.i8(p) }
function {:inline} $i2p.i8.ref(i: i8) returns (ref) { $zext.i8.i64(i) }
function {:inline} $p2i.ref.i16(p: ref) returns (i16) { $trunc.i64.i16(p) }
function {:inline} $i2p.i16.ref(i: i16) returns (ref) { $zext.i16.i64(i) }
function {:inline} $p2i.ref.i32(p: ref) returns (i32) { $trunc.i64.i32(p) }
function {:inline} $i2p.i32.ref(i: i32) returns (ref) { $zext.i32.i64(i) }
function {:inline} $p2i.ref.i64(p: ref) returns (i64) { p }
function {:inline} $i2p.i64.ref(i: i64) returns (ref) { i }

function $fp(ipart: int, fpart: int, epart: int) returns (float);
// Floating-point arithmetic operations
function $abs.float(f: float) returns (float);
function $round.float(f: float) returns (float);
function $sqrt.float(f: float) returns (float);
function $fadd.float(f1: float, f2: float) returns (float);
function $fsub.float(f1: float, f2: float) returns (float);
function $fmul.float(f1: float, f2: float) returns (float);
function $fdiv.float(f1: float, f2: float) returns (float);
function $frem.float(f1: float, f2: float) returns (float);
function $min.float(f1: float, f2: float) returns (float);
function $max.float(f1: float, f2: float) returns (float);
function $fma.float(f1: float, f2: float, f3: float) returns (float);
// Floating-point predicates
function $foeq.float.bool(f1: float, f2: float) returns (bool);
function $fole.float.bool(f1: float, f2: float) returns (bool);
function $folt.float.bool(f1: float, f2: float) returns (bool);
function $foge.float.bool(f1: float, f2: float) returns (bool);
function $fogt.float.bool(f1: float, f2: float) returns (bool);
function $fone.float.bool(f1: float, f2: float) returns (bool);
function $ford.float.bool(f1: float, f2: float) returns (bool);
function $fueq.float.bool(f1: float, f2: float) returns (bool);
function $fugt.float.bool(f1: float, f2: float) returns (bool);
function $fuge.float.bool(f1: float, f2: float) returns (bool);
function $fult.float.bool(f1: float, f2: float) returns (bool);
function $fule.float.bool(f1: float, f2: float) returns (bool);
function $fune.float.bool(f1: float, f2: float) returns (bool);
function $funo.float.bool(f1: float, f2: float) returns (bool);
function $ffalse.float.bool(f1: float, f2: float) returns (bool);
function $ftrue.float.bool(f1: float, f2: float) returns (bool);
// Floating-point/integer conversion
function $bitcast.float.i8(f: float) returns (i8);
function $bitcast.float.i16(f: float) returns (i16);
function $bitcast.float.i32(f: float) returns (i32);
function $bitcast.float.i64(f: float) returns (i64);
function $bitcast.float.i80(f: float) returns (i80);
function $bitcast.i8.float(i: i8) returns (float);
function $bitcast.i16.float(i: i16) returns (float);
function $bitcast.i32.float(i: i32) returns (float);
function $bitcast.i64.float(i: i64) returns (float);
function $bitcast.i80.float(i: i80) returns (float);
function $fp2si.float.i1(f: float) returns (i1);
function $fp2si.float.i5(f: float) returns (i5);
function $fp2si.float.i6(f: float) returns (i6);
function $fp2si.float.i8(f: float) returns (i8);
function $fp2si.float.i16(f: float) returns (i16);
function $fp2si.float.i24(f: float) returns (i24);
function $fp2si.float.i32(f: float) returns (i32);
function $fp2si.float.i40(f: float) returns (i40);
function $fp2si.float.i48(f: float) returns (i48);
function $fp2si.float.i56(f: float) returns (i56);
function $fp2si.float.i64(f: float) returns (i64);
function $fp2si.float.i80(f: float) returns (i80);
function $fp2si.float.i88(f: float) returns (i88);
function $fp2si.float.i96(f: float) returns (i96);
function $fp2si.float.i128(f: float) returns (i128);
function $fp2si.float.i160(f: float) returns (i160);
function $fp2si.float.i256(f: float) returns (i256);
function $fp2ui.float.i1(f: float) returns (i1);
function $fp2ui.float.i5(f: float) returns (i5);
function $fp2ui.float.i6(f: float) returns (i6);
function $fp2ui.float.i8(f: float) returns (i8);
function $fp2ui.float.i16(f: float) returns (i16);
function $fp2ui.float.i24(f: float) returns (i24);
function $fp2ui.float.i32(f: float) returns (i32);
function $fp2ui.float.i40(f: float) returns (i40);
function $fp2ui.float.i48(f: float) returns (i48);
function $fp2ui.float.i56(f: float) returns (i56);
function $fp2ui.float.i64(f: float) returns (i64);
function $fp2ui.float.i80(f: float) returns (i80);
function $fp2ui.float.i88(f: float) returns (i88);
function $fp2ui.float.i96(f: float) returns (i96);
function $fp2ui.float.i128(f: float) returns (i128);
function $fp2ui.float.i160(f: float) returns (i160);
function $fp2ui.float.i256(f: float) returns (i256);
function $si2fp.i1.float(i: i1) returns (float);
function $si2fp.i5.float(i: i5) returns (float);
function $si2fp.i6.float(i: i6) returns (float);
function $si2fp.i8.float(i: i8) returns (float);
function $si2fp.i16.float(i: i16) returns (float);
function $si2fp.i24.float(i: i24) returns (float);
function $si2fp.i32.float(i: i32) returns (float);
function $si2fp.i40.float(i: i40) returns (float);
function $si2fp.i48.float(i: i48) returns (float);
function $si2fp.i56.float(i: i56) returns (float);
function $si2fp.i64.float(i: i64) returns (float);
function $si2fp.i80.float(i: i80) returns (float);
function $si2fp.i88.float(i: i88) returns (float);
function $si2fp.i96.float(i: i96) returns (float);
function $si2fp.i128.float(i: i128) returns (float);
function $si2fp.i160.float(i: i160) returns (float);
function $si2fp.i256.float(i: i256) returns (float);
function $ui2fp.i1.float(i: i1) returns (float);
function $ui2fp.i5.float(i: i5) returns (float);
function $ui2fp.i6.float(i: i6) returns (float);
function $ui2fp.i8.float(i: i8) returns (float);
function $ui2fp.i16.float(i: i16) returns (float);
function $ui2fp.i24.float(i: i24) returns (float);
function $ui2fp.i32.float(i: i32) returns (float);
function $ui2fp.i40.float(i: i40) returns (float);
function $ui2fp.i48.float(i: i48) returns (float);
function $ui2fp.i56.float(i: i56) returns (float);
function $ui2fp.i64.float(i: i64) returns (float);
function $ui2fp.i80.float(i: i80) returns (float);
function $ui2fp.i88.float(i: i88) returns (float);
function $ui2fp.i96.float(i: i96) returns (float);
function $ui2fp.i128.float(i: i128) returns (float);
function $ui2fp.i160.float(i: i160) returns (float);
function $ui2fp.i256.float(i: i256) returns (float);
// Floating-point conversion
function $fpext.float.float(f: float) returns (float);
function $fptrunc.float.float(f: float) returns (float);
// Floating-point load/store operations
function {:inline} $load.float(M: [ref] float, p: ref) returns (float) { M[p] }
function {:inline} $store.float(M: [ref] float, p: ref, f: float) returns ([ref] float) { M[p := f] }
function {:inline} $load.unsafe.float(M: [ref] i8, p: ref) returns (float) { $bitcast.i8.float(M[p]) }
function {:inline} $store.unsafe.float(M: [ref] i8, p: ref, f: float) returns ([ref] i8) { M[p := $bitcast.float.i8(f)] }
function $extractvalue.float(p: ref, i: int) returns (float);
const {:count 14} .str.1: ref;
axiom (.str.1 == $sub.ref(0, 1038));
const env_value_str: ref;
axiom (env_value_str == $sub.ref(0, 2070));
const {:count 3} .str.1.7: ref;
axiom (.str.1.7 == $sub.ref(0, 3097));
const {:count 14} .str.14: ref;
axiom (.str.14 == $sub.ref(0, 4135));
const errno_global: ref;
axiom (errno_global == $sub.ref(0, 5163));
const reach_error: ref;
axiom (reach_error == $sub.ref(0, 6195));
procedure reach_error()
{
$bb0:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 2, 44} true;
  assume {:verifier.code 0} true;
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 2, 44} true;
  assume {:verifier.code 0} true;
  $exn := false;
  return;
}
const ssl3_accept: ref;
axiom (ssl3_accept == $sub.ref(0, 7227));
procedure ssl3_accept($i0: i32)
  returns ($r: i32)
{
  var $i1: i32;
  var $i2: i32;
  var $i3: i32;
  var $i4: i32;
  var $i5: i32;
  var $i6: i32;
  var $i7: i32;
  var $i8: i32;
  var $i9: i32;
  var $i10: i32;
  var $i11: i32;
  var $i12: i32;
  var $i13: i32;
  var $i14: i32;
  var $i15: i32;
  var $i16: i32;
  var $i17: i64;
  var $i18: i32;
  var $i19: i32;
  var $i20: i32;
  var $i21: i32;
  var $i22: i32;
  var $i23: i32;
  var $i24: i32;
  var $i25: i64;
  var $i26: i32;
  var $i27: i32;
  var $i28: i64;
  var $i29: i32;
  var $i30: i1;
  var $i32: i1;
  var $i33: i32;
  var $i31: i32;
  var $i34: i32;
  var $i35: i1;
  var $i36: i32;
  var $i37: i1;
  var $i38: i1;
  var $i40: i32;
  var $i41: i32;
  var $i42: i32;
  var $i43: i64;
  var $i44: i32;
  var $i45: i32;
  var $i46: i32;
  var $i47: i32;
  var $i48: i32;
  var $i49: i64;
  var $i50: i64;
  var $i51: i1;
  var $i52: i1;
  var $i53: i1;
  var $i54: i1;
  var $i55: i1;
  var $i56: i1;
  var $i57: i1;
  var $i58: i1;
  var $i59: i1;
  var $i60: i1;
  var $i61: i1;
  var $i62: i1;
  var $i63: i1;
  var $i64: i1;
  var $i65: i1;
  var $i66: i1;
  var $i67: i1;
  var $i68: i1;
  var $i69: i1;
  var $i70: i1;
  var $i71: i1;
  var $i72: i1;
  var $i73: i1;
  var $i74: i1;
  var $i75: i1;
  var $i76: i1;
  var $i77: i1;
  var $i78: i1;
  var $i79: i1;
  var $i80: i1;
  var $i81: i1;
  var $i82: i1;
  var $i83: i1;
  var $i84: i1;
  var $i85: i1;
  var $i86: i1;
  var $i87: i32;
  var $i88: i1;
  var $i89: i1;
  var $i91: i32;
  var $i92: i1;
  var $i94: i1;
  var $i90: i32;
  var $i95: i1;
  var $i96: i1;
  var $i97: i1;
  var $i98: i32;
  var $i102: i32;
  var $i99: i32;
  var $i100: i32;
  var $i101: i32;
  var $i115: i32;
  var $i116: i1;
  var $i117: i32;
  var $i118: i1;
  var $i119: i32;
  var $i120: i1;
  var $i121: i32;
  var $i122: i1;
  var $i124: i1;
  var $i125: i32;
  var $i123: i32;
  var $i126: i1;
  var $i127: i1;
  var $i128: i32;
  var $i129: i32;
  var $i130: i64;
  var $i131: i64;
  var $i132: i1;
  var $i134: i32;
  var $i135: i1;
  var $i133: i32;
  var $i136: i32;
  var $i137: i64;
  var $i138: i64;
  var $i139: i64;
  var $i140: i1;
  var $i141: i32;
  var $i142: i1;
  var $i145: i64;
  var $i146: i1;
  var $i147: i64;
  var $i148: i1;
  var $i149: i1;
  var $i150: i32;
  var $i151: i64;
  var $i152: i64;
  var $i153: i1;
  var $i154: i32;
  var $i155: i64;
  var $i156: i64;
  var $i157: i1;
  var $i158: i32;
  var $i159: i32;
  var $i160: i1;
  var $i143: i32;
  var $i144: i64;
  var $i161: i32;
  var $i162: i1;
  var $i163: i32;
  var $i164: i32;
  var $i165: i64;
  var $i166: i32;
  var $i167: i32;
  var $i168: i64;
  var $i169: i32;
  var $i170: i32;
  var $i171: i64;
  var $i172: i32;
  var $i173: i1;
  var $i174: i1;
  var $i175: i32;
  var $i176: i1;
  var $i180: i32;
  var $i181: i64;
  var $i182: i64;
  var $i183: i1;
  var $i184: i32;
  var $i185: i1;
  var $i189: i32;
  var $i190: i1;
  var $i186: i32;
  var $i187: i32;
  var $i188: i32;
  var $i177: i32;
  var $i178: i32;
  var $i179: i32;
  var $i191: i32;
  var $i192: i32;
  var $i193: i32;
  var $i194: i32;
  var $i195: i1;
  var $i196: i1;
  var $i198: i1;
  var $i197: i64;
  var $i199: i32;
  var $i200: i1;
  var $i201: i1;
  var $i203: i32;
  var $i204: i1;
  var $i202: i32;
  var $i205: i32;
  var $i206: i1;
  var $i207: i32;
  var $i208: i1;
  var $i209: i32;
  var $i210: i1;
  var $i211: i1;
  var $i212: i32;
  var $i213: i1;
  var $i214: i32;
  var $i215: i1;
  var $i216: i32;
  var $i217: i1;
  var $i218: i1;
  var $i219: i32;
  var $i220: i1;
  var $i221: i1;
  var $i222: i1;
  var $i223: i32;
  var $i224: i1;
  var $i225: i1;
  var $i103: i32;
  var $i104: i32;
  var $i105: i32;
  var $i106: i64;
  var $i107: i32;
  var $i108: i32;
  var $i109: i32;
  var $i110: i32;
  var $i111: i32;
  var $i112: i32;
  var $i113: i64;
  var $i114: i64;
  var $i226: i1;
  var $i227: i1;
  var $i228: i1;
  var $i229: i32;
  var $i230: i1;
  var $i231: i1;
  var $i232: i1;
  var $i233: i1;
  var $i234: i1;
  var $i235: i1;
  var $i236: i1;
  var $i237: i1;
  var $i238: i1;
  var $i239: i1;
  var $i240: i1;
  var $i93: i32;
  var $i241: i1;
  var $i39: i32;
$bb0:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 13, 26} true;
  assume {:verifier.code 1} true;
  call {:cexpr "ssl3_accept:arg:initial_state"} boogie_si_record_i32($i0);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 13, 26} true;
  assume {:verifier.code 1} true;
  call $i1 := __VERIFIER_nondet_int();
  call {:cexpr "smack:ext:__VERIFIER_nondet_int"} boogie_si_record_i32($i1);
  call {:cexpr "s__info_callback"} boogie_si_record_i32($i1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 14, 25} true;
  assume {:verifier.code 1} true;
  call $i2 := __VERIFIER_nondet_int();
  call {:cexpr "smack:ext:__VERIFIER_nondet_int"} boogie_si_record_i32($i2);
  call {:cexpr "s__in_handshake"} boogie_si_record_i32($i2);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 18, 20} true;
  assume {:verifier.code 1} true;
  call $i3 := __VERIFIER_nondet_int();
  call {:cexpr "smack:ext:__VERIFIER_nondet_int"} boogie_si_record_i32($i3);
  call {:cexpr "s__version"} boogie_si_record_i32($i3);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 21, 16} true;
  assume {:verifier.code 1} true;
  call $i4 := __VERIFIER_nondet_int();
  call {:cexpr "smack:ext:__VERIFIER_nondet_int"} boogie_si_record_i32($i4);
  call {:cexpr "s__hit"} boogie_si_record_i32($i4);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 24, 18} true;
  assume {:verifier.code 1} true;
  call $i5 := __VERIFIER_nondet_int();
  call {:cexpr "smack:ext:__VERIFIER_nondet_int"} boogie_si_record_i32($i5);
  call {:cexpr "s__debug"} boogie_si_record_i32($i5);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 26, 17} true;
  assume {:verifier.code 1} true;
  call $i6 := __VERIFIER_nondet_int();
  call {:cexpr "smack:ext:__VERIFIER_nondet_int"} boogie_si_record_i32($i6);
  call {:cexpr "s__cert"} boogie_si_record_i32($i6);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 27, 20} true;
  assume {:verifier.code 1} true;
  call $i7 := __VERIFIER_nondet_int();
  call {:cexpr "smack:ext:__VERIFIER_nondet_int"} boogie_si_record_i32($i7);
  call {:cexpr "s__options"} boogie_si_record_i32($i7);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 28, 24} true;
  assume {:verifier.code 1} true;
  call $i8 := __VERIFIER_nondet_int();
  call {:cexpr "smack:ext:__VERIFIER_nondet_int"} boogie_si_record_i32($i8);
  call {:cexpr "s__verify_mode"} boogie_si_record_i32($i8);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 29, 26} true;
  assume {:verifier.code 1} true;
  call $i9 := __VERIFIER_nondet_int();
  call {:cexpr "smack:ext:__VERIFIER_nondet_int"} boogie_si_record_i32($i9);
  call {:cexpr "s__session__peer"} boogie_si_record_i32($i9);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 30, 41} true;
  assume {:verifier.code 1} true;
  call $i10 := __VERIFIER_nondet_int();
  call {:cexpr "smack:ext:__VERIFIER_nondet_int"} boogie_si_record_i32($i10);
  call {:cexpr "s__cert__pkeys__AT0__privatekey"} boogie_si_record_i32($i10);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 31, 31} true;
  assume {:verifier.code 1} true;
  call $i11 := __VERIFIER_nondet_int();
  call {:cexpr "smack:ext:__VERIFIER_nondet_int"} boogie_si_record_i32($i11);
  call {:cexpr "s__ctx__info_callback"} boogie_si_record_i32($i11);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 32, 48} true;
  assume {:verifier.code 1} true;
  call $i12 := __VERIFIER_nondet_int();
  call {:cexpr "smack:ext:__VERIFIER_nondet_int"} boogie_si_record_i32($i12);
  call {:cexpr "s__ctx__stats__sess_accept_renegotiate"} boogie_si_record_i32($i12);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 33, 36} true;
  assume {:verifier.code 1} true;
  call $i13 := __VERIFIER_nondet_int();
  call {:cexpr "smack:ext:__VERIFIER_nondet_int"} boogie_si_record_i32($i13);
  call {:cexpr "s__ctx__stats__sess_accept"} boogie_si_record_i32($i13);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 34, 41} true;
  assume {:verifier.code 1} true;
  call $i14 := __VERIFIER_nondet_int();
  call {:cexpr "smack:ext:__VERIFIER_nondet_int"} boogie_si_record_i32($i14);
  call {:cexpr "s__ctx__stats__sess_accept_good"} boogie_si_record_i32($i14);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 36, 35} true;
  assume {:verifier.code 1} true;
  call $i15 := __VERIFIER_nondet_int();
  call {:cexpr "smack:ext:__VERIFIER_nondet_int"} boogie_si_record_i32($i15);
  call {:cexpr "s__s3__tmp__reuse_message"} boogie_si_record_i32($i15);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 38, 32} true;
  assume {:verifier.code 1} true;
  call $i16 := __VERIFIER_nondet_int();
  call {:cexpr "smack:ext:__VERIFIER_nondet_int"} boogie_si_record_i32($i16);
  call {:cexpr "s__s3__tmp__new_cipher"} boogie_si_record_i32($i16);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 48, 15} true;
  assume {:verifier.code 1} true;
  call $i17 := __VERIFIER_nondet_long();
  call {:cexpr "smack:ext:__VERIFIER_nondet_long"} boogie_si_record_i64($i17);
  call {:cexpr "num1"} boogie_si_record_i64($i17);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 54, 17} true;
  assume {:verifier.code 1} true;
  call $i18 := __VERIFIER_nondet_int();
  call {:cexpr "smack:ext:__VERIFIER_nondet_int"} boogie_si_record_i32($i18);
  call {:cexpr "tmp___1"} boogie_si_record_i32($i18);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 55, 17} true;
  assume {:verifier.code 1} true;
  call $i19 := __VERIFIER_nondet_int();
  call {:cexpr "smack:ext:__VERIFIER_nondet_int"} boogie_si_record_i32($i19);
  call {:cexpr "tmp___2"} boogie_si_record_i32($i19);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 56, 17} true;
  assume {:verifier.code 1} true;
  call $i20 := __VERIFIER_nondet_int();
  call {:cexpr "smack:ext:__VERIFIER_nondet_int"} boogie_si_record_i32($i20);
  call {:cexpr "tmp___3"} boogie_si_record_i32($i20);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 57, 17} true;
  assume {:verifier.code 1} true;
  call $i21 := __VERIFIER_nondet_int();
  call {:cexpr "smack:ext:__VERIFIER_nondet_int"} boogie_si_record_i32($i21);
  call {:cexpr "tmp___4"} boogie_si_record_i32($i21);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 58, 17} true;
  assume {:verifier.code 1} true;
  call $i22 := __VERIFIER_nondet_int();
  call {:cexpr "smack:ext:__VERIFIER_nondet_int"} boogie_si_record_i32($i22);
  call {:cexpr "tmp___5"} boogie_si_record_i32($i22);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 59, 17} true;
  assume {:verifier.code 1} true;
  call $i23 := __VERIFIER_nondet_int();
  call {:cexpr "smack:ext:__VERIFIER_nondet_int"} boogie_si_record_i32($i23);
  call {:cexpr "tmp___6"} boogie_si_record_i32($i23);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 60, 17} true;
  assume {:verifier.code 1} true;
  call $i24 := __VERIFIER_nondet_int();
  call {:cexpr "smack:ext:__VERIFIER_nondet_int"} boogie_si_record_i32($i24);
  call {:cexpr "tmp___7"} boogie_si_record_i32($i24);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 61, 18} true;
  assume {:verifier.code 1} true;
  call $i25 := __VERIFIER_nondet_long();
  call {:cexpr "smack:ext:__VERIFIER_nondet_long"} boogie_si_record_i64($i25);
  call {:cexpr "tmp___8"} boogie_si_record_i64($i25);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 62, 17} true;
  assume {:verifier.code 1} true;
  call $i26 := __VERIFIER_nondet_int();
  call {:cexpr "smack:ext:__VERIFIER_nondet_int"} boogie_si_record_i32($i26);
  call {:cexpr "tmp___9"} boogie_si_record_i32($i26);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 63, 18} true;
  assume {:verifier.code 1} true;
  call $i27 := __VERIFIER_nondet_int();
  call {:cexpr "smack:ext:__VERIFIER_nondet_int"} boogie_si_record_i32($i27);
  call {:cexpr "tmp___10"} boogie_si_record_i32($i27);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 68, 31} true;
  assume {:verifier.code 1} true;
  call $i28 := __VERIFIER_nondet_ulong();
  call {:cexpr "smack:ext:__VERIFIER_nondet_ulong"} boogie_si_record_i64($i28);
  call {:cexpr "__cil_tmp58"} boogie_si_record_i64($i28);
  call {:cexpr "ssl3_accept:arg:s__state"} boogie_si_record_i32($i0);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 76, 9} true;
  assume {:verifier.code 1} true;
  call $i29 := __VERIFIER_nondet_int();
  call {:cexpr "smack:ext:__VERIFIER_nondet_int"} boogie_si_record_i32($i29);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 82, 24} true;
  assume {:verifier.code 0} true;
  $i30 := $ne.i32($i1, 0);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 82, 7} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i30} true;
  goto $bb1, $bb2;
$bb1:
  assume ($i30 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 84, 3} true;
  assume {:verifier.code 0} true;
  $i31 := $i1;
  goto $bb3;
$bb2:
  assume !(($i30 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 85, 31} true;
  assume {:verifier.code 0} true;
  $i32 := $ne.i32($i11, 0);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 85, 9} true;
  assume {:verifier.code 0} true;
  $i33 := 0;
  assume {:branchcond $i32} true;
  goto $bb4, $bb5;
$bb3:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 0, 0} true;
  assume {:verifier.code 0} true;
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 90, 15} true;
  assume {:verifier.code 0} true;
  $i34 := $add.i32($i18, 12288);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 90, 15} true;
  assume {:verifier.code 0} true;
  $i35 := $ne.i32($i34, 0);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 90, 7} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i35} true;
  goto $bb7, $bb8;
$bb4:
  assume ($i32 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 87, 5} true;
  assume {:verifier.code 0} true;
  $i33 := $i11;
  goto $bb6;
$bb5:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 85, 9} true;
  assume {:verifier.code 0} true;
  assume !(($i32 == 1));
  goto $bb6;
$bb6:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 0, 0} true;
  assume {:verifier.code 0} true;
  assume {:verifier.code 0} true;
  $i31 := $i33;
  goto $bb3;
$bb7:
  assume ($i35 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 91, 17} true;
  assume {:verifier.code 0} true;
  $i36 := $add.i32($i19, 16384);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 91, 17} true;
  assume {:verifier.code 0} true;
  $i37 := $ne.i32($i36, 0);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 91, 9} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i37} true;
  goto $bb10, $bb11;
$bb8:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 90, 7} true;
  assume {:verifier.code 0} true;
  assume !(($i35 == 1));
  goto $bb9;
$bb9:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 95, 15} true;
  assume {:verifier.code 0} true;
  $i38 := $eq.i32($i6, 0);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 95, 7} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i38} true;
  goto $bb13, $bb14;
$bb10:
  assume ($i37 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 93, 5} true;
  assume {:verifier.code 0} true;
  goto $bb12;
$bb11:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 91, 9} true;
  assume {:verifier.code 0} true;
  assume !(($i37 == 1));
  goto $bb12;
$bb12:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 94, 3} true;
  assume {:verifier.code 0} true;
  goto $bb9;
$bb13:
  assume ($i38 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 96, 5} true;
  assume {:verifier.code 0} true;
  $i39 := $sub.i32(0, 1);
  goto $bb15;
$bb14:
  assume !(($i38 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 99, 3} true;
  assume {:verifier.code 0} true;
  $i40, $i41, $i42, $i43, $i44, $i45, $i46, $i47, $i48, $i49, $i50 := $i13, $i12, $u0, $i17, 1, 0, $i24, 0, $i0, $u1, $i28;
  goto $bb16;
$bb15:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 0, 0} true;
  assume {:verifier.code 0} true;
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 634, 1} true;
  assume {:verifier.code 0} true;
  $r := $i39;
  $exn := false;
  return;
$bb16:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 0, 0} true;
  assume {:verifier.code 0} true;
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 32, 7} true;
  assume {:verifier.code 0} true;
  assume {:verifier.code 0} true;
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 48, 8} true;
  assume {:verifier.code 0} true;
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 0, 0} true;
  assume {:verifier.code 0} true;
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 81, 19} true;
  assume {:verifier.code 0} true;
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 60, 7} true;
  assume {:verifier.code 0} true;
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 75, 13} true;
  assume {:verifier.code 0} true;
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 0, 0} true;
  assume {:verifier.code 0} true;
  assume {:verifier.code 0} true;
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 68, 17} true;
  assume {:verifier.code 0} true;
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 99, 13} true;
  assume {:verifier.code 0} true;
  goto $bb17;
$bb17:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 102, 18} true;
  assume {:verifier.code 0} true;
  $i51 := $eq.i32($i48, 12292);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 102, 9} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i51} true;
  goto $bb18, $bb19;
$bb18:
  assume ($i51 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 103, 7} true;
  assume {:verifier.code 0} true;
  goto $bb20;
$bb19:
  assume !(($i51 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 105, 20} true;
  assume {:verifier.code 0} true;
  $i52 := $eq.i32($i48, 16384);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 105, 11} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i52} true;
  goto $bb21, $bb22;
$bb20:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 210, 77} true;
  assume {:verifier.code 0} true;
  goto $bb23;
$bb21:
  assume ($i52 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 106, 9} true;
  assume {:verifier.code 0} true;
  goto $bb23;
$bb22:
  assume !(($i52 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 108, 22} true;
  assume {:verifier.code 0} true;
  $i53 := $eq.i32($i48, 8192);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 108, 13} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i53} true;
  goto $bb24, $bb25;
$bb23:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 210, 77} true;
  assume {:verifier.code 0} true;
  goto $bb26;
$bb24:
  assume ($i53 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 109, 11} true;
  assume {:verifier.code 0} true;
  goto $bb26;
$bb25:
  assume !(($i53 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 111, 24} true;
  assume {:verifier.code 0} true;
  $i54 := $eq.i32($i48, 24576);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 111, 15} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i54} true;
  goto $bb27, $bb28;
$bb26:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 210, 77} true;
  assume {:verifier.code 0} true;
  goto $bb29;
$bb27:
  assume ($i54 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 112, 13} true;
  assume {:verifier.code 0} true;
  goto $bb29;
$bb28:
  assume !(($i54 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 114, 26} true;
  assume {:verifier.code 0} true;
  $i55 := $eq.i32($i48, 8195);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 114, 17} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i55} true;
  goto $bb30, $bb31;
$bb29:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 210, 77} true;
  assume {:verifier.code 0} true;
  goto $bb32;
$bb30:
  assume ($i55 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 115, 15} true;
  assume {:verifier.code 0} true;
  goto $bb32;
$bb31:
  assume !(($i55 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 117, 28} true;
  assume {:verifier.code 0} true;
  $i56 := $eq.i32($i48, 8480);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 117, 19} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i56} true;
  goto $bb33, $bb34;
$bb32:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 216, 84} true;
  assume {:verifier.code 0} true;
  $i86 := $ne.i32($i31, 0);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 216, 81} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i86} true;
  goto $bb127, $bb128;
$bb33:
  assume ($i56 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 118, 17} true;
  assume {:verifier.code 0} true;
  goto $bb35;
$bb34:
  assume !(($i56 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 120, 30} true;
  assume {:verifier.code 0} true;
  $i57 := $eq.i32($i48, 8481);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 120, 21} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i57} true;
  goto $bb36, $bb37;
$bb35:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 254, 77} true;
  assume {:verifier.code 0} true;
  goto $bb38;
$bb36:
  assume ($i57 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 121, 19} true;
  assume {:verifier.code 0} true;
  goto $bb38;
$bb37:
  assume !(($i57 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 123, 32} true;
  assume {:verifier.code 0} true;
  $i58 := $eq.i32($i48, 8482);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 123, 23} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i58} true;
  goto $bb39, $bb40;
$bb38:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 258, 83} true;
  assume {:verifier.code 1} true;
  call $i115 := __VERIFIER_nondet_int();
  call {:cexpr "smack:ext:__VERIFIER_nondet_int"} boogie_si_record_i32($i115);
  call {:cexpr "ret"} boogie_si_record_i32($i115);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 259, 85} true;
  assume {:verifier.code 0} true;
  $i116 := $sle.i32($i115, 0);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 259, 81} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i116} true;
  goto $bb148, $bb149;
$bb39:
  assume ($i58 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 124, 21} true;
  assume {:verifier.code 0} true;
  goto $bb41;
$bb40:
  assume !(($i58 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 126, 34} true;
  assume {:verifier.code 0} true;
  $i59 := $eq.i32($i48, 8464);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 126, 25} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i59} true;
  goto $bb42, $bb43;
$bb41:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 268, 77} true;
  assume {:verifier.code 0} true;
  $i103, $i104, $i105, $i106, $i107, $i108, $i109, $i110, $i111, $i112, $i113, $i114 := $i40, $i41, $i42, $i43, $i44, 0, $i45, $i46, $i47, 3, $i49, $i50;
  goto $bb147;
$bb42:
  assume ($i59 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 127, 23} true;
  assume {:verifier.code 0} true;
  goto $bb44;
$bb43:
  assume !(($i59 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 129, 36} true;
  assume {:verifier.code 0} true;
  $i60 := $eq.i32($i48, 8465);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 129, 27} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i60} true;
  goto $bb45, $bb46;
$bb44:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 268, 77} true;
  assume {:verifier.code 0} true;
  goto $bb47;
$bb45:
  assume ($i60 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 130, 25} true;
  assume {:verifier.code 0} true;
  goto $bb47;
$bb46:
  assume !(($i60 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 132, 38} true;
  assume {:verifier.code 0} true;
  $i61 := $eq.i32($i48, 8466);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 132, 29} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i61} true;
  goto $bb48, $bb49;
$bb47:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 268, 77} true;
  assume {:verifier.code 0} true;
  goto $bb50;
$bb48:
  assume ($i61 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 133, 27} true;
  assume {:verifier.code 0} true;
  goto $bb50;
$bb49:
  assume !(($i61 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 135, 40} true;
  assume {:verifier.code 0} true;
  $i62 := $eq.i32($i48, 8496);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 135, 31} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i62} true;
  goto $bb51, $bb52;
$bb50:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 273, 83} true;
  assume {:verifier.code 1} true;
  call $i117 := __VERIFIER_nondet_int();
  call {:cexpr "smack:ext:__VERIFIER_nondet_int"} boogie_si_record_i32($i117);
  call {:cexpr "ret"} boogie_si_record_i32($i117);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 274, 91} true;
  assume {:verifier.code 0} true;
  $i118 := $eq.i32($i47, 0);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 274, 81} true;
  assume {:verifier.code 0} true;
  $i119 := $i47;
  assume {:branchcond $i118} true;
  goto $bb150, $bb151;
$bb51:
  assume ($i62 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 136, 29} true;
  assume {:verifier.code 0} true;
  goto $bb53;
$bb52:
  assume !(($i62 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 138, 42} true;
  assume {:verifier.code 0} true;
  $i63 := $eq.i32($i48, 8497);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 138, 33} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i63} true;
  goto $bb54, $bb55;
$bb53:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 283, 77} true;
  assume {:verifier.code 0} true;
  goto $bb56;
$bb54:
  assume ($i63 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 139, 31} true;
  assume {:verifier.code 0} true;
  goto $bb56;
$bb55:
  assume !(($i63 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 141, 44} true;
  assume {:verifier.code 0} true;
  $i64 := $eq.i32($i48, 8512);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 141, 35} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i64} true;
  goto $bb57, $bb58;
$bb56:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 286, 83} true;
  assume {:verifier.code 1} true;
  call $i121 := __VERIFIER_nondet_int();
  call {:cexpr "smack:ext:__VERIFIER_nondet_int"} boogie_si_record_i32($i121);
  call {:cexpr "ret"} boogie_si_record_i32($i121);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 287, 91} true;
  assume {:verifier.code 0} true;
  $i122 := $eq.i32($i47, 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 287, 81} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i122} true;
  goto $bb155, $bb156;
$bb57:
  assume ($i64 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 142, 33} true;
  assume {:verifier.code 0} true;
  goto $bb59;
$bb58:
  assume !(($i64 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 144, 46} true;
  assume {:verifier.code 0} true;
  $i65 := $eq.i32($i48, 8513);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 144, 37} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i65} true;
  goto $bb60, $bb61;
$bb59:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 303, 77} true;
  assume {:verifier.code 0} true;
  goto $bb62;
$bb60:
  assume ($i65 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 145, 35} true;
  assume {:verifier.code 0} true;
  goto $bb62;
$bb61:
  assume !(($i65 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 147, 48} true;
  assume {:verifier.code 0} true;
  $i66 := $eq.i32($i48, 8528);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 147, 39} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i66} true;
  goto $bb63, $bb64;
$bb62:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 307, 48} true;
  assume {:verifier.code 1} true;
  call $i129 := __VERIFIER_nondet_int();
  call {:cexpr "smack:ext:__VERIFIER_nondet_int"} boogie_si_record_i32($i129);
  call {:cexpr "s__s3__tmp__new_cipher__algorithms"} boogie_si_record_i32($i129);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 308, 91} true;
  assume {:verifier.code 0} true;
  $i130 := $sext.i32.i64($i129);
  call {:cexpr "__cil_tmp56"} boogie_si_record_i64($i130);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 309, 93} true;
  assume {:verifier.code 0} true;
  $i131 := $add.i64($i130, 256);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 309, 93} true;
  assume {:verifier.code 0} true;
  $i132 := $ne.i64($i131, 0);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 309, 81} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i132} true;
  goto $bb166, $bb167;
$bb63:
  assume ($i66 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 148, 37} true;
  assume {:verifier.code 0} true;
  goto $bb65;
$bb64:
  assume !(($i66 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 150, 50} true;
  assume {:verifier.code 0} true;
  $i67 := $eq.i32($i48, 8529);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 150, 41} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i67} true;
  goto $bb66, $bb67;
$bb65:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 320, 77} true;
  assume {:verifier.code 0} true;
  goto $bb68;
$bb66:
  assume ($i67 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 151, 39} true;
  assume {:verifier.code 0} true;
  goto $bb68;
$bb67:
  assume !(($i67 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 153, 52} true;
  assume {:verifier.code 0} true;
  $i68 := $eq.i32($i48, 8544);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 153, 43} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i68} true;
  goto $bb69, $bb70;
$bb68:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 323, 48} true;
  assume {:verifier.code 1} true;
  call $i136 := __VERIFIER_nondet_int();
  call {:cexpr "smack:ext:__VERIFIER_nondet_int"} boogie_si_record_i32($i136);
  call {:cexpr "s__s3__tmp__new_cipher__algorithms"} boogie_si_record_i32($i136);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 324, 81} true;
  assume {:verifier.code 0} true;
  $i137 := $sext.i32.i64($i136);
  call {:cexpr "l"} boogie_si_record_i64($i137);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 326, 91} true;
  assume {:verifier.code 0} true;
  $i138 := $sext.i32.i64($i7);
  call {:cexpr "__cil_tmp57"} boogie_si_record_i64($i138);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 327, 93} true;
  assume {:verifier.code 0} true;
  $i139 := $add.i64($i138, 2097152);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 327, 93} true;
  assume {:verifier.code 0} true;
  $i140 := $ne.i64($i139, 0);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 327, 81} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i140} true;
  goto $bb171, $bb172;
$bb69:
  assume ($i68 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 154, 41} true;
  assume {:verifier.code 0} true;
  goto $bb71;
$bb70:
  assume !(($i68 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 156, 54} true;
  assume {:verifier.code 0} true;
  $i69 := $eq.i32($i48, 8545);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 156, 45} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i69} true;
  goto $bb72, $bb73;
$bb71:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 380, 77} true;
  assume {:verifier.code 0} true;
  goto $bb74;
$bb72:
  assume ($i69 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 157, 43} true;
  assume {:verifier.code 0} true;
  goto $bb74;
$bb73:
  assume !(($i69 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 159, 56} true;
  assume {:verifier.code 0} true;
  $i70 := $eq.i32($i48, 8560);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 159, 47} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i70} true;
  goto $bb75, $bb76;
$bb74:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 383, 96} true;
  assume {:verifier.code 0} true;
  $i172 := $add.i32($i8, 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 383, 96} true;
  assume {:verifier.code 0} true;
  $i173 := $ne.i32($i172, 0);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 383, 81} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i173} true;
  goto $bb198, $bb199;
$bb75:
  assume ($i70 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 160, 45} true;
  assume {:verifier.code 0} true;
  goto $bb77;
$bb76:
  assume !(($i70 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 162, 58} true;
  assume {:verifier.code 0} true;
  $i71 := $eq.i32($i48, 8561);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 162, 49} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i71} true;
  goto $bb78, $bb79;
$bb77:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 423, 77} true;
  assume {:verifier.code 0} true;
  goto $bb80;
$bb78:
  assume ($i71 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 163, 47} true;
  assume {:verifier.code 0} true;
  goto $bb80;
$bb79:
  assume !(($i71 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 165, 60} true;
  assume {:verifier.code 0} true;
  $i72 := $eq.i32($i48, 8448);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 165, 51} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i72} true;
  goto $bb81, $bb82;
$bb80:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 426, 83} true;
  assume {:verifier.code 1} true;
  call $i194 := __VERIFIER_nondet_int();
  call {:cexpr "smack:ext:__VERIFIER_nondet_int"} boogie_si_record_i32($i194);
  call {:cexpr "ret"} boogie_si_record_i32($i194);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 427, 85} true;
  assume {:verifier.code 0} true;
  $i195 := $sle.i32($i194, 0);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 427, 81} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i195} true;
  goto $bb217, $bb218;
$bb81:
  assume ($i72 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 166, 49} true;
  assume {:verifier.code 0} true;
  goto $bb83;
$bb82:
  assume !(($i72 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 168, 62} true;
  assume {:verifier.code 0} true;
  $i73 := $eq.i32($i48, 8576);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 168, 53} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i73} true;
  goto $bb84, $bb85;
$bb83:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 435, 86} true;
  assume {:verifier.code 0} true;
  $i196 := $sgt.i64($i43, 0);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 435, 81} true;
  assume {:verifier.code 0} true;
  $i197 := $i43;
  assume {:branchcond $i196} true;
  goto $bb219, $bb220;
$bb84:
  assume ($i73 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 169, 51} true;
  assume {:verifier.code 0} true;
  goto $bb86;
$bb85:
  assume !(($i73 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 171, 64} true;
  assume {:verifier.code 0} true;
  $i74 := $eq.i32($i48, 8577);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 171, 55} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i74} true;
  goto $bb87, $bb88;
$bb86:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 445, 77} true;
  assume {:verifier.code 0} true;
  goto $bb89;
$bb87:
  assume ($i74 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 172, 53} true;
  assume {:verifier.code 0} true;
  goto $bb89;
$bb88:
  assume !(($i74 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 174, 66} true;
  assume {:verifier.code 0} true;
  $i75 := $eq.i32($i48, 8592);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 174, 57} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i75} true;
  goto $bb90, $bb91;
$bb89:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 448, 83} true;
  assume {:verifier.code 1} true;
  call $i199 := __VERIFIER_nondet_int();
  call {:cexpr "smack:ext:__VERIFIER_nondet_int"} boogie_si_record_i32($i199);
  call {:cexpr "ret"} boogie_si_record_i32($i199);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 449, 85} true;
  assume {:verifier.code 0} true;
  $i200 := $sle.i32($i199, 0);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 449, 81} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i200} true;
  goto $bb224, $bb225;
$bb90:
  assume ($i75 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 175, 55} true;
  assume {:verifier.code 0} true;
  goto $bb92;
$bb91:
  assume !(($i75 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 177, 68} true;
  assume {:verifier.code 0} true;
  $i76 := $eq.i32($i48, 8593);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 177, 59} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i76} true;
  goto $bb93, $bb94;
$bb92:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 462, 77} true;
  assume {:verifier.code 0} true;
  goto $bb95;
$bb93:
  assume ($i76 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 178, 57} true;
  assume {:verifier.code 0} true;
  goto $bb95;
$bb94:
  assume !(($i76 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 180, 70} true;
  assume {:verifier.code 0} true;
  $i77 := $eq.i32($i48, 8608);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 180, 61} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i77} true;
  goto $bb96, $bb97;
$bb95:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 465, 83} true;
  assume {:verifier.code 1} true;
  call $i205 := __VERIFIER_nondet_int();
  call {:cexpr "smack:ext:__VERIFIER_nondet_int"} boogie_si_record_i32($i205);
  call {:cexpr "ret"} boogie_si_record_i32($i205);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 466, 85} true;
  assume {:verifier.code 0} true;
  $i206 := $sle.i32($i205, 0);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 466, 81} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i206} true;
  goto $bb231, $bb232;
$bb96:
  assume ($i77 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 181, 59} true;
  assume {:verifier.code 0} true;
  goto $bb98;
$bb97:
  assume !(($i77 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 183, 72} true;
  assume {:verifier.code 0} true;
  $i78 := $eq.i32($i48, 8609);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 183, 63} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i78} true;
  goto $bb99, $bb100;
$bb98:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 471, 77} true;
  assume {:verifier.code 0} true;
  goto $bb101;
$bb99:
  assume ($i78 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 184, 61} true;
  assume {:verifier.code 0} true;
  goto $bb101;
$bb100:
  assume !(($i78 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 186, 74} true;
  assume {:verifier.code 0} true;
  $i79 := $eq.i32($i48, 8640);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 186, 65} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i79} true;
  goto $bb102, $bb103;
$bb101:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 474, 83} true;
  assume {:verifier.code 1} true;
  call $i207 := __VERIFIER_nondet_int();
  call {:cexpr "smack:ext:__VERIFIER_nondet_int"} boogie_si_record_i32($i207);
  call {:cexpr "ret"} boogie_si_record_i32($i207);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 475, 85} true;
  assume {:verifier.code 0} true;
  $i208 := $sle.i32($i207, 0);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 475, 81} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i208} true;
  goto $bb233, $bb234;
$bb102:
  assume ($i79 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 187, 63} true;
  assume {:verifier.code 0} true;
  goto $bb104;
$bb103:
  assume !(($i79 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 189, 76} true;
  assume {:verifier.code 0} true;
  $i80 := $eq.i32($i48, 8641);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 189, 67} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i80} true;
  goto $bb105, $bb106;
$bb104:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 480, 77} true;
  assume {:verifier.code 0} true;
  goto $bb107;
$bb105:
  assume ($i80 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 190, 65} true;
  assume {:verifier.code 0} true;
  goto $bb107;
$bb106:
  assume !(($i80 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 192, 78} true;
  assume {:verifier.code 0} true;
  $i81 := $eq.i32($i48, 8656);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 192, 69} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i81} true;
  goto $bb108, $bb109;
$bb107:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 483, 83} true;
  assume {:verifier.code 1} true;
  call $i209 := __VERIFIER_nondet_int();
  call {:cexpr "smack:ext:__VERIFIER_nondet_int"} boogie_si_record_i32($i209);
  call {:cexpr "ret"} boogie_si_record_i32($i209);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 484, 85} true;
  assume {:verifier.code 0} true;
  $i210 := $sle.i32($i209, 0);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 484, 81} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i210} true;
  goto $bb235, $bb236;
$bb108:
  assume ($i81 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 193, 67} true;
  assume {:verifier.code 0} true;
  goto $bb110;
$bb109:
  assume !(($i81 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 195, 80} true;
  assume {:verifier.code 0} true;
  $i82 := $eq.i32($i48, 8657);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 195, 71} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i82} true;
  goto $bb111, $bb112;
$bb110:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 493, 77} true;
  assume {:verifier.code 0} true;
  goto $bb113;
$bb111:
  assume ($i82 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 196, 69} true;
  assume {:verifier.code 0} true;
  goto $bb113;
$bb112:
  assume !(($i82 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 198, 82} true;
  assume {:verifier.code 0} true;
  $i83 := $eq.i32($i48, 8672);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 198, 73} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i83} true;
  goto $bb114, $bb115;
$bb113:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 497, 83} true;
  assume {:verifier.code 0} true;
  $i213 := $ne.i32($i26, 0);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 497, 81} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i213} true;
  goto $bb240, $bb241;
$bb114:
  assume ($i83 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 199, 71} true;
  assume {:verifier.code 0} true;
  goto $bb116;
$bb115:
  assume !(($i83 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 201, 84} true;
  assume {:verifier.code 0} true;
  $i84 := $eq.i32($i48, 8673);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 201, 75} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i84} true;
  goto $bb117, $bb118;
$bb116:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 514, 77} true;
  assume {:verifier.code 0} true;
  goto $bb119;
$bb117:
  assume ($i84 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 202, 73} true;
  assume {:verifier.code 0} true;
  goto $bb119;
$bb118:
  assume !(($i84 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 204, 86} true;
  assume {:verifier.code 0} true;
  $i85 := $eq.i32($i48, 3);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 204, 77} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i85} true;
  goto $bb120, $bb121;
$bb119:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 517, 83} true;
  assume {:verifier.code 1} true;
  call $i219 := __VERIFIER_nondet_int();
  call {:cexpr "smack:ext:__VERIFIER_nondet_int"} boogie_si_record_i32($i219);
  call {:cexpr "ret"} boogie_si_record_i32($i219);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 518, 91} true;
  assume {:verifier.code 0} true;
  $i220 := $eq.i32($i47, 4);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 518, 81} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i220} true;
  goto $bb249, $bb250;
$bb120:
  assume ($i85 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 205, 75} true;
  assume {:verifier.code 0} true;
  goto $bb122;
$bb121:
  assume !(($i85 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 207, 75} true;
  assume {:verifier.code 0} true;
  goto $bb123;
$bb122:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 535, 81} true;
  assume {:verifier.code 0} true;
  $i224 := $ne.i32($i45, 0);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 535, 81} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i224} true;
  goto $bb257, $bb258;
$bb123:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 546, 77} true;
  assume {:verifier.code 0} true;
  $i93 := $sub.i32(0, 1);
  goto $bb137;
$bb124:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 208, 79} true;
  assume {:verifier.code 0} true;
  assume {:branchcond 0} true;
  goto $bb125, $bb126;
$bb125:
  assume (0 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 208, 82} true;
  assume {:verifier.code 0} true;
  goto $bb20;
$bb126:
  assume !((0 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 547, 82} true;
  assume {:verifier.code 0} true;
  $i103, $i104, $i105, $i106, $i107, $i108, $i109, $i110, $i111, $i112, $i113, $i114 := $u0, $u0, $u0, $u1, $u0, $u0, $u0, $u0, $u0, $u0, $u1, $u1;
  goto $bb147;
$bb127:
  assume ($i86 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 218, 77} true;
  assume {:verifier.code 0} true;
  goto $bb129;
$bb128:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 216, 81} true;
  assume {:verifier.code 0} true;
  assume !(($i86 == 1));
  goto $bb129;
$bb129:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 220, 102} true;
  assume {:verifier.code 0} true;
  $i87 := $mul.i32($i3, 8);
  call {:cexpr "__cil_tmp55"} boogie_si_record_i32($i87);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 221, 93} true;
  assume {:verifier.code 0} true;
  $i88 := $ne.i32($i87, 3);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 221, 81} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i88} true;
  goto $bb130, $bb131;
$bb130:
  assume ($i88 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 222, 79} true;
  assume {:verifier.code 0} true;
  $i39 := $sub.i32(0, 1);
  goto $bb15;
$bb131:
  assume !(($i88 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 226, 97} true;
  assume {:verifier.code 0} true;
  $i89 := $eq.i32($i44, 0);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 226, 81} true;
  assume {:verifier.code 0} true;
  $i90 := $i44;
  assume {:branchcond $i89} true;
  goto $bb132, $bb133;
$bb132:
  assume ($i89 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 227, 85} true;
  assume {:verifier.code 1} true;
  call $i91 := __VERIFIER_nondet_int();
  call {:cexpr "smack:ext:__VERIFIER_nondet_int"} boogie_si_record_i32($i91);
  call {:cexpr "buf"} boogie_si_record_i32($i91);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 228, 87} true;
  assume {:verifier.code 0} true;
  $i92 := $eq.i32($i91, 0);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 228, 83} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i92} true;
  goto $bb135, $bb136;
$bb133:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 226, 81} true;
  assume {:verifier.code 0} true;
  assume !(($i89 == 1));
  goto $bb134;
$bb134:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 0, 0} true;
  assume {:verifier.code 0} true;
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 238, 83} true;
  assume {:verifier.code 0} true;
  $i95 := $ne.i32($i21, 0);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 238, 81} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i95} true;
  goto $bb140, $bb141;
$bb135:
  assume ($i92 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 230, 81} true;
  assume {:verifier.code 0} true;
  $i93 := $sub.i32(0, 1);
  goto $bb137;
$bb136:
  assume !(($i92 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 232, 85} true;
  assume {:verifier.code 0} true;
  $i94 := $ne.i32($i20, 0);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 232, 83} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i94} true;
  goto $bb138, $bb139;
$bb137:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 0, 0} true;
  assume {:verifier.code 0} true;
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 627, 10} true;
  assume {:verifier.code 0} true;
  $i241 := $ne.i32($i31, 0);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 627, 7} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i241} true;
  goto $bb340, $bb341;
$bb138:
  assume ($i94 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 237, 77} true;
  assume {:verifier.code 0} true;
  $i90 := $i91;
  goto $bb134;
$bb139:
  assume !(($i94 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 234, 81} true;
  assume {:verifier.code 0} true;
  $i93 := $sub.i32(0, 1);
  goto $bb137;
$bb140:
  assume ($i95 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 243, 90} true;
  assume {:verifier.code 0} true;
  $i96 := $ne.i32($i48, 12292);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 243, 81} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i96} true;
  goto $bb142, $bb143;
$bb141:
  assume !(($i95 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 240, 79} true;
  assume {:verifier.code 0} true;
  $i93 := $sub.i32(0, 1);
  goto $bb137;
$bb142:
  assume ($i96 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 244, 85} true;
  assume {:verifier.code 0} true;
  $i97 := $ne.i32($i22, 0);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 244, 83} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i97} true;
  goto $bb144, $bb145;
$bb143:
  assume !(($i96 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 251, 118} true;
  assume {:verifier.code 0} true;
  $i102 := $add.i32($i41, 1);
  call {:cexpr "s__ctx__stats__sess_accept_renegotiate"} boogie_si_record_i32($i102);
  assume {:verifier.code 0} true;
  $i99, $i100, $i101 := $i40, $i102, 8480;
  goto $bb146;
$bb144:
  assume ($i97 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 249, 106} true;
  assume {:verifier.code 0} true;
  $i98 := $add.i32($i40, 1);
  call {:cexpr "s__ctx__stats__sess_accept"} boogie_si_record_i32($i98);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 250, 77} true;
  assume {:verifier.code 0} true;
  $i99, $i100, $i101 := $i98, $i41, 8464;
  goto $bb146;
$bb145:
  assume !(($i97 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 246, 81} true;
  assume {:verifier.code 0} true;
  $i93 := $sub.i32(0, 1);
  goto $bb137;
$bb146:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 0, 0} true;
  assume {:verifier.code 0} true;
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 0, 0} true;
  assume {:verifier.code 0} true;
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 0, 0} true;
  assume {:verifier.code 0} true;
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 254, 77} true;
  assume {:verifier.code 0} true;
  $i103, $i104, $i105, $i106, $i107, $i108, $i109, $i110, $i111, $i112, $i113, $i114 := $i99, $i100, $i42, $i43, $i90, 0, $i45, $i46, $i47, $i101, $i49, $i50;
  goto $bb147;
$bb147:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 0, 0} true;
  assume {:verifier.code 0} true;
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 32, 7} true;
  assume {:verifier.code 0} true;
  assume {:verifier.code 0} true;
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 0, 0} true;
  assume {:verifier.code 0} true;
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 0, 0} true;
  assume {:verifier.code 0} true;
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 0, 0} true;
  assume {:verifier.code 0} true;
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 0, 0} true;
  assume {:verifier.code 0} true;
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 60, 7} true;
  assume {:verifier.code 0} true;
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 0, 0} true;
  assume {:verifier.code 0} true;
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 0, 0} true;
  assume {:verifier.code 0} true;
  assume {:verifier.code 0} true;
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 68, 17} true;
  assume {:verifier.code 0} true;
  assume {:verifier.code 0} true;
  goto $bb263;
$bb148:
  assume ($i116 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 260, 79} true;
  assume {:verifier.code 0} true;
  $i93 := $i115;
  goto $bb137;
$bb149:
  assume !(($i116 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 265, 77} true;
  assume {:verifier.code 0} true;
  $i103, $i104, $i105, $i106, $i107, $i108, $i109, $i110, $i111, $i112, $i113, $i114 := $i40, $i41, 8482, $i43, $i44, 0, $i45, $i46, $i47, 8448, $i49, $i50;
  goto $bb147;
$bb150:
  assume ($i118 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 276, 77} true;
  assume {:verifier.code 0} true;
  $i119 := 1;
  goto $bb152;
$bb151:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 274, 81} true;
  assume {:verifier.code 0} true;
  assume !(($i118 == 1));
  goto $bb152;
$bb152:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 0, 0} true;
  assume {:verifier.code 0} true;
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 277, 85} true;
  assume {:verifier.code 0} true;
  $i120 := $sle.i32($i117, 0);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 277, 81} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i120} true;
  goto $bb153, $bb154;
$bb153:
  assume ($i120 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 278, 79} true;
  assume {:verifier.code 0} true;
  $i93 := $i117;
  goto $bb137;
$bb154:
  assume !(($i120 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 283, 77} true;
  assume {:verifier.code 0} true;
  $i103, $i104, $i105, $i106, $i107, $i108, $i109, $i110, $i111, $i112, $i113, $i114 := $i40, $i41, $i42, $i43, $i44, 0, 1, $i46, $i119, 8496, $i49, $i50;
  goto $bb147;
$bb155:
  assume ($i122 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 289, 77} true;
  assume {:verifier.code 0} true;
  $i123 := 2;
  goto $bb157;
$bb156:
  assume !(($i122 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 290, 93} true;
  assume {:verifier.code 0} true;
  $i124 := $eq.i32($i47, 3);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 290, 83} true;
  assume {:verifier.code 0} true;
  $i125 := $i47;
  assume {:branchcond $i124} true;
  goto $bb158, $bb159;
$bb157:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 0, 0} true;
  assume {:verifier.code 0} true;
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 294, 85} true;
  assume {:verifier.code 0} true;
  $i126 := $sle.i32($i121, 0);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 294, 81} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i126} true;
  goto $bb161, $bb162;
$bb158:
  assume ($i124 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 292, 79} true;
  assume {:verifier.code 0} true;
  $i125 := 4;
  goto $bb160;
$bb159:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 290, 83} true;
  assume {:verifier.code 0} true;
  assume !(($i124 == 1));
  goto $bb160;
$bb160:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 0, 0} true;
  assume {:verifier.code 0} true;
  assume {:verifier.code 0} true;
  $i123 := $i125;
  goto $bb157;
$bb161:
  assume ($i126 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 295, 79} true;
  assume {:verifier.code 0} true;
  $i93 := $i121;
  goto $bb137;
$bb162:
  assume !(($i126 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 297, 81} true;
  assume {:verifier.code 0} true;
  $i127 := $ne.i32($i4, 0);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 297, 81} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i127} true;
  goto $bb163, $bb164;
$bb163:
  assume ($i127 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 299, 77} true;
  assume {:verifier.code 0} true;
  $i128 := 8656;
  goto $bb165;
$bb164:
  assume !(($i127 == 1));
  assume {:verifier.code 0} true;
  $i128 := 8512;
  goto $bb165;
$bb165:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 0, 0} true;
  assume {:verifier.code 0} true;
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 303, 77} true;
  assume {:verifier.code 0} true;
  $i103, $i104, $i105, $i106, $i107, $i108, $i109, $i110, $i111, $i112, $i113, $i114 := $i40, $i41, $i42, $i43, $i44, 0, $i45, $i46, $i123, $i128, $i49, $i50;
  goto $bb147;
$bb166:
  assume ($i132 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 311, 77} true;
  assume {:verifier.code 0} true;
  $i133 := 1;
  goto $bb168;
$bb167:
  assume !(($i132 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 312, 85} true;
  assume {:verifier.code 1} true;
  call $i134 := __VERIFIER_nondet_int();
  call {:cexpr "smack:ext:__VERIFIER_nondet_int"} boogie_si_record_i32($i134);
  call {:cexpr "ret"} boogie_si_record_i32($i134);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 313, 87} true;
  assume {:verifier.code 0} true;
  $i135 := $sle.i32($i134, 0);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 313, 83} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i135} true;
  goto $bb169, $bb170;
$bb168:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 0, 0} true;
  assume {:verifier.code 0} true;
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 320, 77} true;
  assume {:verifier.code 0} true;
  $i103, $i104, $i105, $i106, $i107, $i108, $i109, $i110, $i111, $i112, $i113, $i114 := $i40, $i41, $i42, $i43, $i44, $i133, $i45, $i46, $i47, 8528, $i130, $i50;
  goto $bb147;
$bb169:
  assume ($i135 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 314, 81} true;
  assume {:verifier.code 0} true;
  $i93 := $i134;
  goto $bb137;
$bb170:
  assume !(($i135 == 1));
  assume {:verifier.code 0} true;
  $i133 := 0;
  goto $bb168;
$bb171:
  assume ($i140 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 329, 77} true;
  assume {:verifier.code 0} true;
  $i141 := 1;
  goto $bb173;
$bb172:
  assume !(($i140 == 1));
  assume {:verifier.code 0} true;
  $i141 := 0;
  goto $bb173;
$bb173:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 0, 0} true;
  assume {:verifier.code 0} true;
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 333, 81} true;
  assume {:verifier.code 0} true;
  $i142 := $ne.i32($i141, 0);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 333, 81} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i142} true;
  goto $bb174, $bb175;
$bb174:
  assume ($i142 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 334, 79} true;
  assume {:verifier.code 0} true;
  $i143, $i144 := $i46, $i50;
  goto $bb176;
$bb175:
  assume !(($i142 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 336, 85} true;
  assume {:verifier.code 0} true;
  $i145 := $add.i64($i137, 30);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 336, 85} true;
  assume {:verifier.code 0} true;
  $i146 := $ne.i64($i145, 0);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 336, 83} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i146} true;
  goto $bb177, $bb178;
$bb176:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 0, 0} true;
  assume {:verifier.code 0} true;
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 0, 0} true;
  assume {:verifier.code 0} true;
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 360, 95} true;
  assume {:verifier.code 1} true;
  call $i161 := __VERIFIER_nondet_int();
  call {:cexpr "smack:ext:__VERIFIER_nondet_int"} boogie_si_record_i32($i161);
  call {:cexpr "ret"} boogie_si_record_i32($i161);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 361, 97} true;
  assume {:verifier.code 0} true;
  $i162 := $sle.i32($i161, 0);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 361, 93} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i162} true;
  goto $bb190, $bb191;
$bb177:
  assume ($i146 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 337, 81} true;
  assume {:verifier.code 0} true;
  $i143, $i144 := $i46, $i50;
  goto $bb176;
$bb178:
  assume !(($i146 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 339, 87} true;
  assume {:verifier.code 0} true;
  $i147 := $add.i64($i137, 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 339, 87} true;
  assume {:verifier.code 0} true;
  $i148 := $ne.i64($i147, 0);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 339, 85} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i148} true;
  goto $bb179, $bb180;
$bb179:
  assume ($i148 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 340, 119} true;
  assume {:verifier.code 0} true;
  $i149 := $eq.i32($i10, 0);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 340, 87} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i149} true;
  goto $bb181, $bb182;
$bb180:
  assume !(($i148 == 1));
  assume {:verifier.code 0} true;
  $i169, $i170, $i171 := 1, $i46, $i50;
  goto $bb195;
$bb181:
  assume ($i149 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 341, 85} true;
  assume {:verifier.code 0} true;
  $i143, $i144 := $i46, $i50;
  goto $bb176;
$bb182:
  assume !(($i149 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 344, 52} true;
  assume {:verifier.code 1} true;
  call $i150 := __VERIFIER_nondet_int();
  call {:cexpr "smack:ext:__VERIFIER_nondet_int"} boogie_si_record_i32($i150);
  call {:cexpr "s__s3__tmp__new_cipher__algo_strength"} boogie_si_record_i32($i150);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 345, 99} true;
  assume {:verifier.code 0} true;
  $i151 := $sext.i32.i64($i150);
  call {:cexpr "__cil_tmp58"} boogie_si_record_i64($i151);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 346, 101} true;
  assume {:verifier.code 0} true;
  $i152 := $add.i64($i151, 2);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 346, 101} true;
  assume {:verifier.code 0} true;
  $i153 := $ne.i64($i152, 0);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 346, 89} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i153} true;
  goto $bb183, $bb184;
$bb183:
  assume ($i153 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 348, 52} true;
  assume {:verifier.code 1} true;
  call $i154 := __VERIFIER_nondet_int();
  call {:cexpr "smack:ext:__VERIFIER_nondet_int"} boogie_si_record_i32($i154);
  call {:cexpr "s__s3__tmp__new_cipher__algo_strength"} boogie_si_record_i32($i154);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 349, 101} true;
  assume {:verifier.code 0} true;
  $i155 := $sext.i32.i64($i154);
  call {:cexpr "__cil_tmp59"} boogie_si_record_i64($i155);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 350, 103} true;
  assume {:verifier.code 0} true;
  $i156 := $add.i64($i155, 4);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 350, 103} true;
  assume {:verifier.code 0} true;
  $i157 := $ne.i64($i156, 0);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 350, 91} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i157} true;
  goto $bb185, $bb186;
$bb184:
  assume !(($i153 == 1));
  assume {:verifier.code 0} true;
  $i166, $i167, $i168 := 1, $i46, $i151;
  goto $bb193;
$bb185:
  assume ($i157 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 352, 87} true;
  assume {:verifier.code 0} true;
  $i158 := 512;
  goto $bb187;
$bb186:
  assume !(($i157 == 1));
  assume {:verifier.code 0} true;
  $i158 := 1024;
  goto $bb187;
$bb187:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 0, 0} true;
  assume {:verifier.code 0} true;
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 357, 109} true;
  assume {:verifier.code 0} true;
  $i159 := $mul.i32($i23, 8);
  call {:cexpr "__cil_tmp60"} boogie_si_record_i32($i159);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 358, 103} true;
  assume {:verifier.code 0} true;
  $i160 := $sgt.i32($i159, $i158);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 358, 91} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i160} true;
  goto $bb188, $bb189;
$bb188:
  assume ($i160 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 358, 114} true;
  assume {:verifier.code 0} true;
  $i143, $i144 := $i158, $i151;
  goto $bb176;
$bb189:
  assume !(($i160 == 1));
  assume {:verifier.code 0} true;
  $i163, $i164, $i165 := 1, $i158, $i151;
  goto $bb192;
$bb190:
  assume ($i162 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 362, 91} true;
  assume {:verifier.code 0} true;
  $i93 := $i161;
  goto $bb137;
$bb191:
  assume !(($i162 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 364, 87} true;
  assume {:verifier.code 0} true;
  $i163, $i164, $i165 := 0, $i143, $i144;
  goto $bb192;
$bb192:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 0, 0} true;
  assume {:verifier.code 0} true;
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 0, 0} true;
  assume {:verifier.code 0} true;
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 0, 0} true;
  assume {:verifier.code 0} true;
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 368, 85} true;
  assume {:verifier.code 0} true;
  $i166, $i167, $i168 := $i163, $i164, $i165;
  goto $bb193;
$bb193:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 0, 0} true;
  assume {:verifier.code 0} true;
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 60, 7} true;
  assume {:verifier.code 0} true;
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 0, 0} true;
  assume {:verifier.code 0} true;
  assume {:verifier.code 0} true;
  goto $bb194;
$bb194:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 373, 81} true;
  assume {:verifier.code 0} true;
  $i169, $i170, $i171 := $i166, $i167, $i168;
  goto $bb195;
$bb195:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 0, 0} true;
  assume {:verifier.code 0} true;
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 60, 7} true;
  assume {:verifier.code 0} true;
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 68, 17} true;
  assume {:verifier.code 0} true;
  assume {:verifier.code 0} true;
  goto $bb196;
$bb196:
  assume {:verifier.code 0} true;
  goto $bb197;
$bb197:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 380, 77} true;
  assume {:verifier.code 0} true;
  $i103, $i104, $i105, $i106, $i107, $i108, $i109, $i110, $i111, $i112, $i113, $i114 := $i40, $i41, $i42, $i43, $i44, $i169, $i45, $i170, $i47, 8544, $i49, $i171;
  goto $bb147;
$bb198:
  assume ($i173 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 384, 100} true;
  assume {:verifier.code 0} true;
  $i174 := $ne.i32($i9, 0);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 384, 83} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i174} true;
  goto $bb200, $bb201;
$bb199:
  assume !(($i173 == 1));
  assume {:verifier.code 0} true;
  $i191, $i192, $i193 := $i42, 1, 8560;
  goto $bb216;
$bb200:
  assume ($i174 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 385, 100} true;
  assume {:verifier.code 0} true;
  $i175 := $add.i32($i8, 4);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 385, 100} true;
  assume {:verifier.code 0} true;
  $i176 := $ne.i32($i175, 0);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 385, 85} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i176} true;
  goto $bb202, $bb203;
$bb201:
  assume !(($i174 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 392, 86} true;
  assume {:verifier.code 0} true;
  goto $bb205;
$bb202:
  assume ($i176 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 389, 81} true;
  assume {:verifier.code 0} true;
  goto $bb204;
$bb203:
  assume !(($i176 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 390, 83} true;
  assume {:verifier.code 0} true;
  goto $bb205;
$bb204:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 392, 79} true;
  assume {:verifier.code 0} true;
  $i177, $i178, $i179 := $i42, 1, 8560;
  goto $bb206;
$bb205:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 395, 48} true;
  assume {:verifier.code 1} true;
  call $i180 := __VERIFIER_nondet_int();
  call {:cexpr "smack:ext:__VERIFIER_nondet_int"} boogie_si_record_i32($i180);
  call {:cexpr "s__s3__tmp__new_cipher__algorithms"} boogie_si_record_i32($i180);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 396, 95} true;
  assume {:verifier.code 0} true;
  $i181 := $sext.i32.i64($i180);
  call {:cexpr "__cil_tmp61"} boogie_si_record_i64($i181);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 397, 97} true;
  assume {:verifier.code 0} true;
  $i182 := $add.i64($i181, 256);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 397, 97} true;
  assume {:verifier.code 0} true;
  $i183 := $ne.i64($i182, 0);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 397, 85} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i183} true;
  goto $bb207, $bb208;
$bb206:
  assume {:verifier.code 0} true;
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 0, 0} true;
  assume {:verifier.code 0} true;
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 0, 0} true;
  assume {:verifier.code 0} true;
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 418, 77} true;
  assume {:verifier.code 0} true;
  $i191, $i192, $i193 := $i177, $i178, $i179;
  goto $bb216;
$bb207:
  assume ($i183 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 398, 102} true;
  assume {:verifier.code 0} true;
  $i184 := $add.i32($i8, 2);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 398, 102} true;
  assume {:verifier.code 0} true;
  $i185 := $ne.i32($i184, 0);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 398, 87} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i185} true;
  goto $bb209, $bb210;
$bb208:
  assume !(($i183 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 405, 88} true;
  assume {:verifier.code 0} true;
  goto $bb211;
$bb209:
  assume ($i185 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 399, 85} true;
  assume {:verifier.code 0} true;
  goto $bb211;
$bb210:
  assume !(($i185 == 1));
  assume {:verifier.code 0} true;
  goto $bb212;
$bb211:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 408, 89} true;
  assume {:verifier.code 1} true;
  call $i189 := __VERIFIER_nondet_int();
  call {:cexpr "smack:ext:__VERIFIER_nondet_int"} boogie_si_record_i32($i189);
  call {:cexpr "ret"} boogie_si_record_i32($i189);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 409, 91} true;
  assume {:verifier.code 0} true;
  $i190 := $sle.i32($i189, 0);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 409, 87} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i190} true;
  goto $bb214, $bb215;
$bb212:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 405, 81} true;
  assume {:verifier.code 0} true;
  $i186, $i187, $i188 := $i42, 1, 8560;
  goto $bb213;
$bb213:
  assume {:verifier.code 0} true;
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 0, 0} true;
  assume {:verifier.code 0} true;
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 0, 0} true;
  assume {:verifier.code 0} true;
  assume {:verifier.code 0} true;
  $i177, $i178, $i179 := $i186, $i187, $i188;
  goto $bb206;
$bb214:
  assume ($i190 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 410, 85} true;
  assume {:verifier.code 0} true;
  $i93 := $i189;
  goto $bb137;
$bb215:
  assume !(($i190 == 1));
  assume {:verifier.code 0} true;
  $i186, $i187, $i188 := 8576, 0, 8448;
  goto $bb213;
$bb216:
  assume {:verifier.code 0} true;
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 0, 0} true;
  assume {:verifier.code 0} true;
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 0, 0} true;
  assume {:verifier.code 0} true;
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 423, 77} true;
  assume {:verifier.code 0} true;
  $i103, $i104, $i105, $i106, $i107, $i108, $i109, $i110, $i111, $i112, $i113, $i114 := $i40, $i41, $i191, $i43, $i44, $i192, $i45, $i46, $i47, $i193, $i49, $i50;
  goto $bb147;
$bb217:
  assume ($i195 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 428, 79} true;
  assume {:verifier.code 0} true;
  $i93 := $i194;
  goto $bb137;
$bb218:
  assume !(($i195 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 433, 77} true;
  assume {:verifier.code 0} true;
  $i103, $i104, $i105, $i106, $i107, $i108, $i109, $i110, $i111, $i112, $i113, $i114 := $i40, $i41, 8576, $i43, $i44, 0, $i45, $i46, $i47, 8448, $i49, $i50;
  goto $bb147;
$bb219:
  assume ($i196 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 438, 88} true;
  assume {:verifier.code 0} true;
  $i198 := $sle.i64($i25, 0);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 438, 83} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i198} true;
  goto $bb222, $bb223;
$bb220:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 435, 81} true;
  assume {:verifier.code 0} true;
  assume !(($i196 == 1));
  goto $bb221;
$bb221:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 0, 0} true;
  assume {:verifier.code 0} true;
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 445, 77} true;
  assume {:verifier.code 0} true;
  $i103, $i104, $i105, $i106, $i107, $i108, $i109, $i110, $i111, $i112, $i113, $i114 := $i40, $i41, $i42, $i197, $i44, 0, $i45, $i46, $i47, $i42, $i49, $i50;
  goto $bb147;
$bb222:
  assume ($i198 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 440, 81} true;
  assume {:verifier.code 0} true;
  $i93 := $sub.i32(0, 1);
  goto $bb137;
$bb223:
  assume !(($i198 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 443, 77} true;
  assume {:verifier.code 0} true;
  $i197 := $i25;
  goto $bb221;
$bb224:
  assume ($i200 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 450, 79} true;
  assume {:verifier.code 0} true;
  $i93 := $i199;
  goto $bb137;
$bb225:
  assume !(($i200 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 452, 85} true;
  assume {:verifier.code 0} true;
  $i201 := $eq.i32($i199, 2);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 452, 81} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i201} true;
  goto $bb226, $bb227;
$bb226:
  assume ($i201 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 454, 77} true;
  assume {:verifier.code 0} true;
  $i202 := 8466;
  goto $bb228;
$bb227:
  assume !(($i201 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 455, 85} true;
  assume {:verifier.code 1} true;
  call $i203 := __VERIFIER_nondet_int();
  call {:cexpr "smack:ext:__VERIFIER_nondet_int"} boogie_si_record_i32($i203);
  call {:cexpr "ret"} boogie_si_record_i32($i203);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 456, 87} true;
  assume {:verifier.code 0} true;
  $i204 := $sle.i32($i203, 0);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 456, 83} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i204} true;
  goto $bb229, $bb230;
$bb228:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 0, 0} true;
  assume {:verifier.code 0} true;
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 462, 77} true;
  assume {:verifier.code 0} true;
  $i103, $i104, $i105, $i106, $i107, $i108, $i109, $i110, $i111, $i112, $i113, $i114 := $i40, $i41, $i42, $i43, $i44, 0, $i45, $i46, $i47, $i202, $i49, $i50;
  goto $bb147;
$bb229:
  assume ($i204 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 457, 81} true;
  assume {:verifier.code 0} true;
  $i93 := $i203;
  goto $bb137;
$bb230:
  assume !(($i204 == 1));
  assume {:verifier.code 0} true;
  $i202 := 8592;
  goto $bb228;
$bb231:
  assume ($i206 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 467, 79} true;
  assume {:verifier.code 0} true;
  $i93 := $i205;
  goto $bb137;
$bb232:
  assume !(($i206 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 471, 77} true;
  assume {:verifier.code 0} true;
  $i103, $i104, $i105, $i106, $i107, $i108, $i109, $i110, $i111, $i112, $i113, $i114 := $i40, $i41, $i42, $i43, $i44, 0, $i45, $i46, $i47, 8608, $i49, $i50;
  goto $bb147;
$bb233:
  assume ($i208 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 476, 79} true;
  assume {:verifier.code 0} true;
  $i93 := $i207;
  goto $bb137;
$bb234:
  assume !(($i208 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 480, 77} true;
  assume {:verifier.code 0} true;
  $i103, $i104, $i105, $i106, $i107, $i108, $i109, $i110, $i111, $i112, $i113, $i114 := $i40, $i41, $i42, $i43, $i44, 0, $i45, $i46, $i47, 8640, $i49, $i50;
  goto $bb147;
$bb235:
  assume ($i210 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 485, 79} true;
  assume {:verifier.code 0} true;
  $i93 := $i209;
  goto $bb137;
$bb236:
  assume !(($i210 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 487, 81} true;
  assume {:verifier.code 0} true;
  $i211 := $ne.i32($i4, 0);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 487, 81} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i211} true;
  goto $bb237, $bb238;
$bb237:
  assume ($i211 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 489, 77} true;
  assume {:verifier.code 0} true;
  $i212 := 3;
  goto $bb239;
$bb238:
  assume !(($i211 == 1));
  assume {:verifier.code 0} true;
  $i212 := 8656;
  goto $bb239;
$bb239:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 0, 0} true;
  assume {:verifier.code 0} true;
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 493, 77} true;
  assume {:verifier.code 0} true;
  $i103, $i104, $i105, $i106, $i107, $i108, $i109, $i110, $i111, $i112, $i113, $i114 := $i40, $i41, $i42, $i43, $i44, 0, $i45, $i46, $i47, $i212, $i49, $i50;
  goto $bb147;
$bb240:
  assume ($i213 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 501, 83} true;
  assume {:verifier.code 1} true;
  call $i214 := __VERIFIER_nondet_int();
  call {:cexpr "smack:ext:__VERIFIER_nondet_int"} boogie_si_record_i32($i214);
  call {:cexpr "ret"} boogie_si_record_i32($i214);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 502, 91} true;
  assume {:verifier.code 0} true;
  $i215 := $eq.i32($i47, 2);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 502, 81} true;
  assume {:verifier.code 0} true;
  $i216 := $i47;
  assume {:branchcond $i215} true;
  goto $bb242, $bb243;
$bb241:
  assume !(($i213 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 499, 79} true;
  assume {:verifier.code 0} true;
  $i93 := $sub.i32(0, 1);
  goto $bb137;
$bb242:
  assume ($i215 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 504, 77} true;
  assume {:verifier.code 0} true;
  $i216 := 3;
  goto $bb244;
$bb243:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 502, 81} true;
  assume {:verifier.code 0} true;
  assume !(($i215 == 1));
  goto $bb244;
$bb244:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 0, 0} true;
  assume {:verifier.code 0} true;
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 505, 85} true;
  assume {:verifier.code 0} true;
  $i217 := $sle.i32($i214, 0);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 505, 81} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i217} true;
  goto $bb245, $bb246;
$bb245:
  assume ($i217 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 506, 79} true;
  assume {:verifier.code 0} true;
  $i93 := $i214;
  goto $bb137;
$bb246:
  assume !(($i217 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 510, 83} true;
  assume {:verifier.code 0} true;
  $i218 := $ne.i32($i27, 0);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 510, 81} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i218} true;
  goto $bb247, $bb248;
$bb247:
  assume ($i218 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 514, 77} true;
  assume {:verifier.code 0} true;
  $i103, $i104, $i105, $i106, $i107, $i108, $i109, $i110, $i111, $i112, $i113, $i114 := $i40, $i41, $i42, $i43, $i44, 0, $i45, $i46, $i216, 8672, $i49, $i50;
  goto $bb147;
$bb248:
  assume !(($i218 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 512, 79} true;
  assume {:verifier.code 0} true;
  $i93 := $sub.i32(0, 1);
  goto $bb137;
$bb249:
  assume ($i220 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 519, 79} true;
  assume {:verifier.code 0} true;
  goto $bb251;
$bb250:
  assume !(($i220 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 521, 85} true;
  assume {:verifier.code 0} true;
  $i221 := $sle.i32($i219, 0);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 521, 81} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i221} true;
  goto $bb252, $bb253;
$bb251:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 631, 11} true;
  assume {:verifier.code 0} true;
  call reach_error();
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 631, 25} true;
  assume {:verifier.code 0} true;
  call abort();
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 631, 25} true;
  assume {:verifier.code 0} true;
  assume false;
$bb252:
  assume ($i221 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 522, 79} true;
  assume {:verifier.code 0} true;
  $i93 := $i219;
  goto $bb137;
$bb253:
  assume !(($i221 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 525, 81} true;
  assume {:verifier.code 0} true;
  $i222 := $ne.i32($i4, 0);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 525, 81} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i222} true;
  goto $bb254, $bb255;
$bb254:
  assume ($i222 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 527, 77} true;
  assume {:verifier.code 0} true;
  $i223 := 8640;
  goto $bb256;
$bb255:
  assume !(($i222 == 1));
  assume {:verifier.code 0} true;
  $i223 := 3;
  goto $bb256;
$bb256:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 0, 0} true;
  assume {:verifier.code 0} true;
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 531, 77} true;
  assume {:verifier.code 0} true;
  $i103, $i104, $i105, $i106, $i107, $i108, $i109, $i110, $i111, $i112, $i113, $i114 := $i40, $i41, $i223, $i43, $i44, 0, $i45, $i46, $i47, 8448, $i49, $i50;
  goto $bb147;
$bb257:
  assume ($i224 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 538, 86} true;
  assume {:verifier.code 0} true;
  $i225 := $ne.i32($i31, 0);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 538, 83} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i225} true;
  goto $bb260, $bb261;
$bb258:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 535, 81} true;
  assume {:verifier.code 0} true;
  assume !(($i224 == 1));
  goto $bb259;
$bb259:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 543, 77} true;
  assume {:verifier.code 0} true;
  $i93 := 1;
  goto $bb137;
$bb260:
  assume ($i225 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 540, 79} true;
  assume {:verifier.code 0} true;
  goto $bb262;
$bb261:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 538, 83} true;
  assume {:verifier.code 0} true;
  assume !(($i225 == 1));
  goto $bb262;
$bb262:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 541, 77} true;
  assume {:verifier.code 0} true;
  goto $bb259;
$bb263:
  assume {:verifier.code 0} true;
  goto $bb264;
$bb264:
  assume {:verifier.code 0} true;
  goto $bb265;
$bb265:
  assume {:verifier.code 0} true;
  goto $bb266;
$bb266:
  assume {:verifier.code 0} true;
  goto $bb267;
$bb267:
  assume {:verifier.code 0} true;
  goto $bb268;
$bb268:
  assume {:verifier.code 0} true;
  goto $bb269;
$bb269:
  assume {:verifier.code 0} true;
  goto $bb270;
$bb270:
  assume {:verifier.code 0} true;
  goto $bb271;
$bb271:
  assume {:verifier.code 0} true;
  goto $bb272;
$bb272:
  assume {:verifier.code 0} true;
  goto $bb273;
$bb273:
  assume {:verifier.code 0} true;
  goto $bb274;
$bb274:
  assume {:verifier.code 0} true;
  goto $bb275;
$bb275:
  assume {:verifier.code 0} true;
  goto $bb276;
$bb276:
  assume {:verifier.code 0} true;
  goto $bb277;
$bb277:
  assume {:verifier.code 0} true;
  goto $bb278;
$bb278:
  assume {:verifier.code 0} true;
  goto $bb279;
$bb279:
  assume {:verifier.code 0} true;
  goto $bb280;
$bb280:
  assume {:verifier.code 0} true;
  goto $bb281;
$bb281:
  assume {:verifier.code 0} true;
  goto $bb282;
$bb282:
  assume {:verifier.code 0} true;
  goto $bb283;
$bb283:
  assume {:verifier.code 0} true;
  goto $bb284;
$bb284:
  assume {:verifier.code 0} true;
  goto $bb285;
$bb285:
  assume {:verifier.code 0} true;
  goto $bb286;
$bb286:
  assume {:verifier.code 0} true;
  goto $bb287;
$bb287:
  assume {:verifier.code 0} true;
  goto $bb288;
$bb288:
  assume {:verifier.code 0} true;
  goto $bb289;
$bb289:
  assume {:verifier.code 0} true;
  goto $bb290;
$bb290:
  assume {:verifier.code 0} true;
  goto $bb291;
$bb291:
  assume {:verifier.code 0} true;
  goto $bb292;
$bb292:
  assume {:verifier.code 0} true;
  goto $bb293;
$bb293:
  assume {:verifier.code 0} true;
  goto $bb294;
$bb294:
  assume {:verifier.code 0} true;
  goto $bb295;
$bb295:
  assume {:verifier.code 0} true;
  goto $bb296;
$bb296:
  assume {:verifier.code 0} true;
  goto $bb297;
$bb297:
  assume {:verifier.code 0} true;
  goto $bb298;
$bb298:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 585, 11} true;
  assume {:verifier.code 0} true;
  $i226 := $ne.i32($i15, 0);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 585, 9} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i226} true;
  goto $bb299, $bb301;
$bb299:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 585, 9} true;
  assume {:verifier.code 0} true;
  assume ($i226 == 1);
  goto $bb300;
$bb300:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 603, 14} true;
  assume {:verifier.code 0} true;
  $i233 := $eq.i32($i48, 8576);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 603, 8} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i233} true;
  goto $bb316, $bb317;
$bb301:
  assume !(($i226 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 586, 13} true;
  assume {:verifier.code 0} true;
  $i227 := $ne.i32($i108, 0);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 586, 11} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i227} true;
  goto $bb302, $bb304;
$bb302:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 586, 11} true;
  assume {:verifier.code 0} true;
  assume ($i227 == 1);
  goto $bb303;
$bb303:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 602, 5} true;
  assume {:verifier.code 0} true;
  goto $bb300;
$bb304:
  assume !(($i227 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 588, 13} true;
  assume {:verifier.code 0} true;
  $i228 := $ne.i32($i5, 0);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 588, 13} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i228} true;
  goto $bb305, $bb306;
$bb305:
  assume ($i228 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 589, 17} true;
  assume {:verifier.code 1} true;
  call $i229 := __VERIFIER_nondet_int();
  call {:cexpr "smack:ext:__VERIFIER_nondet_int"} boogie_si_record_i32($i229);
  call {:cexpr "ret"} boogie_si_record_i32($i229);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 590, 19} true;
  assume {:verifier.code 0} true;
  $i230 := $sle.i32($i229, 0);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 590, 15} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i230} true;
  goto $bb308, $bb309;
$bb306:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 588, 13} true;
  assume {:verifier.code 0} true;
  assume !(($i228 == 1));
  goto $bb307;
$bb307:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 594, 16} true;
  assume {:verifier.code 0} true;
  $i231 := $ne.i32($i31, 0);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 594, 13} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i231} true;
  goto $bb310, $bb311;
$bb308:
  assume ($i230 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 591, 13} true;
  assume {:verifier.code 0} true;
  $i93 := $i229;
  goto $bb137;
$bb309:
  assume !(($i230 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 593, 9} true;
  assume {:verifier.code 0} true;
  goto $bb307;
$bb310:
  assume ($i231 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 595, 24} true;
  assume {:verifier.code 0} true;
  $i232 := $ne.i32($i112, $i48);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 595, 15} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i232} true;
  goto $bb313, $bb314;
$bb311:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 594, 13} true;
  assume {:verifier.code 0} true;
  assume !(($i231 == 1));
  goto $bb312;
$bb312:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 601, 7} true;
  assume {:verifier.code 0} true;
  goto $bb303;
$bb313:
  assume ($i232 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 599, 11} true;
  assume {:verifier.code 0} true;
  goto $bb315;
$bb314:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 595, 15} true;
  assume {:verifier.code 0} true;
  assume !(($i232 == 1));
  goto $bb315;
$bb315:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 600, 9} true;
  assume {:verifier.code 0} true;
  goto $bb312;
$bb316:
  assume ($i233 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 604, 18} true;
  assume {:verifier.code 0} true;
  $i234 := $eq.i32($i112, 8592);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 604, 9} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i234} true;
  goto $bb319, $bb320;
$bb317:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 603, 8} true;
  assume {:verifier.code 0} true;
  assume !(($i233 == 1));
  goto $bb318;
$bb318:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 99, 3} true;
  assume {:verifier.code 0} true;
  $i40, $i41, $i42, $i43, $i44, $i45, $i46, $i47, $i48, $i49, $i50 := $i103, $i104, $i105, $i106, $i107, $i109, $i110, $i111, $i112, $i113, $i114;
  goto $bb16;
$bb319:
  assume ($i234 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 605, 18} true;
  assume {:verifier.code 0} true;
  $i235 := $ne.i32($i18, $sub.i32(0, 12288));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 605, 10} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i235} true;
  goto $bb322, $bb323;
$bb320:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 604, 9} true;
  assume {:verifier.code 0} true;
  assume !(($i234 == 1));
  goto $bb321;
$bb321:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 619, 5} true;
  assume {:verifier.code 0} true;
  goto $bb318;
$bb322:
  assume ($i235 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 606, 19} true;
  assume {:verifier.code 0} true;
  $i236 := $ne.i32($i19, $sub.i32(0, 16384));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 606, 11} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i236} true;
  goto $bb325, $bb326;
$bb323:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 605, 10} true;
  assume {:verifier.code 0} true;
  assume !(($i235 == 1));
  goto $bb324;
$bb324:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 618, 6} true;
  assume {:verifier.code 0} true;
  goto $bb321;
$bb325:
  assume ($i236 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 607, 24} true;
  assume {:verifier.code 0} true;
  $i237 := $ne.i64($i113, 4294967040);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 607, 12} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i237} true;
  goto $bb328, $bb329;
$bb326:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 606, 11} true;
  assume {:verifier.code 0} true;
  assume !(($i236 == 1));
  goto $bb327;
$bb327:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 617, 7} true;
  assume {:verifier.code 0} true;
  goto $bb324;
$bb328:
  assume ($i237 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 608, 25} true;
  assume {:verifier.code 0} true;
  $i238 := $ne.i64($i114, 4294967294);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 608, 13} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i238} true;
  goto $bb331, $bb332;
$bb329:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 607, 12} true;
  assume {:verifier.code 0} true;
  assume !(($i237 == 1));
  goto $bb330;
$bb330:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 616, 8} true;
  assume {:verifier.code 0} true;
  goto $bb327;
$bb331:
  assume ($i238 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 609, 22} true;
  assume {:verifier.code 0} true;
  $i239 := $ne.i32($i110, 1024);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 609, 14} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i239} true;
  goto $bb334, $bb335;
$bb332:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 608, 13} true;
  assume {:verifier.code 0} true;
  assume !(($i238 == 1));
  goto $bb333;
$bb333:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 615, 9} true;
  assume {:verifier.code 0} true;
  goto $bb330;
$bb334:
  assume ($i239 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 610, 23} true;
  assume {:verifier.code 0} true;
  $i240 := $ne.i32($i110, 512);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 610, 15} true;
  assume {:verifier.code 0} true;
  assume {:branchcond $i240} true;
  goto $bb337, $bb338;
$bb335:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 609, 14} true;
  assume {:verifier.code 0} true;
  assume !(($i239 == 1));
  goto $bb336;
$bb336:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 614, 10} true;
  assume {:verifier.code 0} true;
  goto $bb333;
$bb337:
  assume ($i240 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 611, 13} true;
  assume {:verifier.code 0} true;
  goto $bb251;
$bb338:
  assume !(($i240 == 1));
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 613, 11} true;
  assume {:verifier.code 0} true;
  goto $bb336;
$bb339:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 623, 3} true;
  assume {:verifier.code 0} true;
  $i93 := $u0;
  goto $bb137;
$bb340:
  assume ($i241 == 1);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 629, 3} true;
  assume {:verifier.code 0} true;
  goto $bb342;
$bb341:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 627, 7} true;
  assume {:verifier.code 0} true;
  assume !(($i241 == 1));
  goto $bb342;
$bb342:
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 630, 3} true;
  assume {:verifier.code 0} true;
  $i39 := $i93;
  goto $bb15;
}
const abort: ref;
axiom (abort == $sub.ref(0, 8259));
procedure abort();
const main: ref;
axiom (main == $sub.ref(0, 9291));
procedure main()
  returns ($r: i32)
{
  var $i0: i32;
$bb0:
  call $initialize();
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 642, 9} true;
  assume {:verifier.code 0} true;
  call {:cexpr "smack:entry:main"} boogie_si_record_ref(main);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 642, 9} true;
  assume {:verifier.code 0} true;
  call $i0 := ssl3_accept(8464);
  call {:cexpr "tmp"} boogie_si_record_i32($i0);
  assume {:sourceloc "./output/s3_srvr_11.cil_tmp.c", 644, 3} true;
  assume {:verifier.code 0} true;
  $r := $i0;
  $exn := false;
  return;
}
const __VERIFIER_assume: ref;
axiom (__VERIFIER_assume == $sub.ref(0, 10323));
procedure __VERIFIER_assume($i0: i32)
{
$bb0:
  assume {:sourceloc "./lib/smack.c", 258, 29} true;
  assume {:verifier.code 1} true;
  call {:cexpr "__VERIFIER_assume:arg:x"} boogie_si_record_i32($i0);
  assume {:sourceloc "./lib/smack.c", 258, 29} true;
  assume {:verifier.code 1} true;
  assume true;
  assume {:sourceloc "./lib/smack.c", 38, 3} true;
  assume {:verifier.code 1} true;
  assume $i0 != $0;
  assume {:sourceloc "./lib/smack.c", 39, 1} true;
  assume {:verifier.code 0} true;
  $exn := false;
  return;
}
const __SMACK_code: ref;
axiom (__SMACK_code == $sub.ref(0, 11355));
procedure __SMACK_code.ref.i32($p0: ref, p.1: i32);
procedure __SMACK_code.ref($p0: ref);
const __SMACK_dummy: ref;
axiom (__SMACK_dummy == $sub.ref(0, 12387));
procedure __SMACK_dummy($i0: i32)
{
$bb0:
  assume {:sourceloc "./lib/smack.c", 258, 29} true;
  assume {:verifier.code 1} true;
  call {:cexpr "__SMACK_dummy:arg:v"} boogie_si_record_i32($i0);
  assume {:sourceloc "./lib/smack.c", 258, 29} true;
  assume {:verifier.code 1} true;
  assume true;
  assume {:sourceloc "./lib/smack.c", 258, 59} true;
  assume {:verifier.code 0} true;
  $exn := false;
  return;
}
const __SMACK_check_overflow: ref;
axiom (__SMACK_check_overflow == $sub.ref(0, 13419));
procedure __SMACK_check_overflow($i0: i32)
{
$bb0:
  assume {:sourceloc "./lib/smack.c", 258, 29} true;
  assume {:verifier.code 1} true;
  call {:cexpr "__SMACK_check_overflow:arg:flag"} boogie_si_record_i32($i0);
  assume {:sourceloc "./lib/smack.c", 258, 29} true;
  assume {:verifier.code 1} true;
  assume true;
  assume {:sourceloc "./lib/smack.c", 63, 3} true;
  assume {:verifier.code 1} true;
  assert {:overflow} $i0 == $0;
  assume {:sourceloc "./lib/smack.c", 64, 1} true;
  assume {:verifier.code 0} true;
  $exn := false;
  return;
}
const __SMACK_nondet_char: ref;
axiom (__SMACK_nondet_char == $sub.ref(0, 14451));
procedure __SMACK_nondet_char()
  returns ($r: i8);
const __SMACK_nondet_signed_char: ref;
axiom (__SMACK_nondet_signed_char == $sub.ref(0, 15483));
procedure __SMACK_nondet_signed_char()
  returns ($r: i8);
const __SMACK_nondet_unsigned_char: ref;
axiom (__SMACK_nondet_unsigned_char == $sub.ref(0, 16515));
procedure __SMACK_nondet_unsigned_char()
  returns ($r: i8);
const __SMACK_nondet_short: ref;
axiom (__SMACK_nondet_short == $sub.ref(0, 17547));
procedure __SMACK_nondet_short()
  returns ($r: i16);
const __SMACK_nondet_signed_short: ref;
axiom (__SMACK_nondet_signed_short == $sub.ref(0, 18579));
procedure __SMACK_nondet_signed_short()
  returns ($r: i16);
const __SMACK_nondet_signed_short_int: ref;
axiom (__SMACK_nondet_signed_short_int == $sub.ref(0, 19611));
procedure __SMACK_nondet_signed_short_int()
  returns ($r: i16);
const __SMACK_nondet_unsigned_short: ref;
axiom (__SMACK_nondet_unsigned_short == $sub.ref(0, 20643));
procedure __SMACK_nondet_unsigned_short()
  returns ($r: i16);
const __SMACK_nondet_unsigned_short_int: ref;
axiom (__SMACK_nondet_unsigned_short_int == $sub.ref(0, 21675));
procedure __SMACK_nondet_unsigned_short_int()
  returns ($r: i16);
const __VERIFIER_nondet_int: ref;
axiom (__VERIFIER_nondet_int == $sub.ref(0, 22707));
procedure __VERIFIER_nondet_int()
  returns ($r: i32)
{
  var $i0: i32;
  var $i1: i1;
  var $i3: i1;
  var $i2: i1;
  var $i4: i32;
$bb0:
  assume {:sourceloc "./lib/smack.c", 115, 11} true;
  assume {:verifier.code 1} true;
  assume {:sourceloc "./lib/smack.c", 115, 11} true;
  assume {:verifier.code 1} true;
  call $i0 := __SMACK_nondet_int();
  call {:cexpr "smack:ext:__SMACK_nondet_int"} boogie_si_record_i32($i0);
  call {:cexpr "x"} boogie_si_record_i32($i0);
  assume {:sourceloc "./lib/smack.c", 116, 23} true;
  assume {:verifier.code 0} true;
  $i1 := $sge.i32($i0, $sub.i32(0, 2147483648));
  assume {:sourceloc "./lib/smack.c", 116, 34} true;
  assume {:verifier.code 0} true;
  $i2 := 0;
  assume {:branchcond $i1} true;
  goto $bb1, $bb2;
$bb1:
  assume ($i1 == 1);
  assume {:sourceloc "./lib/smack.c", 116, 39} true;
  assume {:verifier.code 1} true;
  $i3 := $sle.i32($i0, 2147483647);
  assume {:verifier.code 0} true;
  $i2 := $i3;
  goto $bb3;
$bb2:
  assume {:sourceloc "./lib/smack.c", 116, 34} true;
  assume {:verifier.code 0} true;
  assume !(($i1 == 1));
  goto $bb3;
$bb3:
  assume {:sourceloc "./lib/smack.c", 0, 0} true;
  assume {:verifier.code 1} true;
  assume {:sourceloc "./lib/smack.c", 116, 34} true;
  assume {:verifier.code 1} true;
  $i4 := $zext.i1.i32($i2);
  assume {:sourceloc "./lib/smack.c", 116, 3} true;
  assume {:verifier.code 1} true;
  call __VERIFIER_assume($i4);
  assume {:sourceloc "./lib/smack.c", 117, 3} true;
  assume {:verifier.code 0} true;
  $r := $i0;
  $exn := false;
  return;
}
const __SMACK_nondet_int: ref;
axiom (__SMACK_nondet_int == $sub.ref(0, 23739));
procedure __SMACK_nondet_int()
  returns ($r: i32);
const __SMACK_nondet_signed_int: ref;
axiom (__SMACK_nondet_signed_int == $sub.ref(0, 24771));
procedure __SMACK_nondet_signed_int()
  returns ($r: i32);
const __SMACK_nondet_unsigned: ref;
axiom (__SMACK_nondet_unsigned == $sub.ref(0, 25803));
procedure __SMACK_nondet_unsigned()
  returns ($r: i32);
const __SMACK_nondet_unsigned_int: ref;
axiom (__SMACK_nondet_unsigned_int == $sub.ref(0, 26835));
procedure __SMACK_nondet_unsigned_int()
  returns ($r: i32);
const __VERIFIER_nondet_long: ref;
axiom (__VERIFIER_nondet_long == $sub.ref(0, 27867));
procedure __VERIFIER_nondet_long()
  returns ($r: i64)
{
  var $i0: i64;
  var $i1: i1;
  var $i3: i1;
  var $i2: i1;
  var $i4: i32;
$bb0:
  assume {:sourceloc "./lib/smack.c", 145, 12} true;
  assume {:verifier.code 1} true;
  assume {:sourceloc "./lib/smack.c", 145, 12} true;
  assume {:verifier.code 1} true;
  call $i0 := __SMACK_nondet_long();
  call {:cexpr "smack:ext:__SMACK_nondet_long"} boogie_si_record_i64($i0);
  call {:cexpr "x"} boogie_si_record_i64($i0);
  assume {:sourceloc "./lib/smack.c", 146, 23} true;
  assume {:verifier.code 0} true;
  $i1 := $sge.i64($i0, $sub.i64(0, 9223372036854775808));
  assume {:sourceloc "./lib/smack.c", 146, 35} true;
  assume {:verifier.code 0} true;
  $i2 := 0;
  assume {:branchcond $i1} true;
  goto $bb1, $bb2;
$bb1:
  assume ($i1 == 1);
  assume {:sourceloc "./lib/smack.c", 146, 40} true;
  assume {:verifier.code 1} true;
  $i3 := $sle.i64($i0, 9223372036854775807);
  assume {:verifier.code 0} true;
  $i2 := $i3;
  goto $bb3;
$bb2:
  assume {:sourceloc "./lib/smack.c", 146, 35} true;
  assume {:verifier.code 0} true;
  assume !(($i1 == 1));
  goto $bb3;
$bb3:
  assume {:sourceloc "./lib/smack.c", 0, 0} true;
  assume {:verifier.code 1} true;
  assume {:sourceloc "./lib/smack.c", 146, 35} true;
  assume {:verifier.code 1} true;
  $i4 := $zext.i1.i32($i2);
  assume {:sourceloc "./lib/smack.c", 146, 3} true;
  assume {:verifier.code 1} true;
  call __VERIFIER_assume($i4);
  assume {:sourceloc "./lib/smack.c", 147, 3} true;
  assume {:verifier.code 0} true;
  $r := $i0;
  $exn := false;
  return;
}
const __SMACK_nondet_long: ref;
axiom (__SMACK_nondet_long == $sub.ref(0, 28899));
procedure __SMACK_nondet_long()
  returns ($r: i64);
const __SMACK_nondet_long_int: ref;
axiom (__SMACK_nondet_long_int == $sub.ref(0, 29931));
procedure __SMACK_nondet_long_int()
  returns ($r: i64);
const __SMACK_nondet_signed_long: ref;
axiom (__SMACK_nondet_signed_long == $sub.ref(0, 30963));
procedure __SMACK_nondet_signed_long()
  returns ($r: i64);
const __SMACK_nondet_signed_long_int: ref;
axiom (__SMACK_nondet_signed_long_int == $sub.ref(0, 31995));
procedure __SMACK_nondet_signed_long_int()
  returns ($r: i64);
const __VERIFIER_nondet_unsigned_long: ref;
axiom (__VERIFIER_nondet_unsigned_long == $sub.ref(0, 33027));
procedure __VERIFIER_nondet_unsigned_long()
  returns ($r: i64)
{
  var $i0: i64;
  var $i1: i64;
  var $i2: i64;
  var $i3: i1;
  var $i5: i1;
  var $i6: i1;
  var $i4: i1;
  var $i7: i32;
  var $i8: i1;
  var $i10: i1;
  var $i9: i1;
  var $i11: i32;
$bb0:
  assume {:sourceloc "./lib/smack.c", 169, 21} true;
  assume {:verifier.code 1} true;
  assume {:sourceloc "./lib/smack.c", 169, 21} true;
  assume {:verifier.code 1} true;
  call $i0 := __SMACK_nondet_unsigned_long();
  call {:cexpr "smack:ext:__SMACK_nondet_unsigned_long"} boogie_si_record_i64($i0);
  call {:cexpr "x"} boogie_si_record_i64($i0);
  assume {:sourceloc "./lib/smack.c", 170, 23} true;
  assume {:verifier.code 1} true;
  call $i1 := __SMACK_nondet_unsigned_long();
  call {:cexpr "smack:ext:__SMACK_nondet_unsigned_long"} boogie_si_record_i64($i1);
  call {:cexpr "min"} boogie_si_record_i64($i1);
  assume {:sourceloc "./lib/smack.c", 171, 23} true;
  assume {:verifier.code 1} true;
  call $i2 := __SMACK_nondet_unsigned_long();
  call {:cexpr "smack:ext:__SMACK_nondet_unsigned_long"} boogie_si_record_i64($i2);
  call {:cexpr "max"} boogie_si_record_i64($i2);
  assume {:sourceloc "./lib/smack.c", 172, 25} true;
  assume {:verifier.code 0} true;
  $i3 := $eq.i64($i1, 0);
  assume {:sourceloc "./lib/smack.c", 172, 30} true;
  assume {:verifier.code 0} true;
  $i4 := 0;
  assume {:branchcond $i3} true;
  goto $bb1, $bb2;
$bb1:
  assume ($i3 == 1);
  assume {:sourceloc "./lib/smack.c", 172, 37} true;
  assume {:verifier.code 0} true;
  $i5 := $uge.i64($i2, 18446744073709551615);
  assume {:sourceloc "./lib/smack.c", 172, 50} true;
  assume {:verifier.code 0} true;
  $i4 := 0;
  assume {:branchcond $i5} true;
  goto $bb4, $bb5;
$bb2:
  assume {:sourceloc "./lib/smack.c", 172, 30} true;
  assume {:verifier.code 0} true;
  assume !(($i3 == 1));
  goto $bb3;
$bb3:
  assume {:sourceloc "./lib/smack.c", 0, 0} true;
  assume {:verifier.code 1} true;
  assume {:sourceloc "./lib/smack.c", 172, 50} true;
  assume {:verifier.code 1} true;
  $i7 := $zext.i1.i32($i4);
  assume {:sourceloc "./lib/smack.c", 172, 3} true;
  assume {:verifier.code 1} true;
  call __VERIFIER_assume($i7);
  assume {:sourceloc "./lib/smack.c", 173, 23} true;
  assume {:verifier.code 0} true;
  $i8 := $uge.i64($i0, $i1);
  assume {:sourceloc "./lib/smack.c", 173, 30} true;
  assume {:verifier.code 0} true;
  $i9 := 0;
  assume {:branchcond $i8} true;
  goto $bb6, $bb7;
$bb4:
  assume ($i5 == 1);
  assume {:sourceloc "./lib/smack.c", 172, 57} true;
  assume {:verifier.code 1} true;
  $i6 := $ule.i64($i2, 18446744073709551615);
  assume {:verifier.code 0} true;
  $i4 := $i6;
  goto $bb3;
$bb5:
  assume {:sourceloc "./lib/smack.c", 172, 50} true;
  assume {:verifier.code 0} true;
  assume !(($i5 == 1));
  goto $bb3;
$bb6:
  assume ($i8 == 1);
  assume {:sourceloc "./lib/smack.c", 173, 35} true;
  assume {:verifier.code 1} true;
  $i10 := $ule.i64($i0, $i2);
  assume {:verifier.code 0} true;
  $i9 := $i10;
  goto $bb8;
$bb7:
  assume {:sourceloc "./lib/smack.c", 173, 30} true;
  assume {:verifier.code 0} true;
  assume !(($i8 == 1));
  goto $bb8;
$bb8:
  assume {:sourceloc "./lib/smack.c", 0, 0} true;
  assume {:verifier.code 1} true;
  assume {:sourceloc "./lib/smack.c", 173, 30} true;
  assume {:verifier.code 1} true;
  $i11 := $zext.i1.i32($i9);
  assume {:sourceloc "./lib/smack.c", 173, 3} true;
  assume {:verifier.code 1} true;
  call __VERIFIER_assume($i11);
  assume {:sourceloc "./lib/smack.c", 174, 3} true;
  assume {:verifier.code 0} true;
  $r := $i0;
  $exn := false;
  return;
}
const __SMACK_nondet_unsigned_long: ref;
axiom (__SMACK_nondet_unsigned_long == $sub.ref(0, 34059));
procedure __SMACK_nondet_unsigned_long()
  returns ($r: i64);
const __SMACK_nondet_unsigned_long_int: ref;
axiom (__SMACK_nondet_unsigned_long_int == $sub.ref(0, 35091));
procedure __SMACK_nondet_unsigned_long_int()
  returns ($r: i64);
const __SMACK_nondet_long_long: ref;
axiom (__SMACK_nondet_long_long == $sub.ref(0, 36123));
procedure __SMACK_nondet_long_long()
  returns ($r: i64);
const __SMACK_nondet_long_long_int: ref;
axiom (__SMACK_nondet_long_long_int == $sub.ref(0, 37155));
procedure __SMACK_nondet_long_long_int()
  returns ($r: i64);
const __SMACK_nondet_signed_long_long: ref;
axiom (__SMACK_nondet_signed_long_long == $sub.ref(0, 38187));
procedure __SMACK_nondet_signed_long_long()
  returns ($r: i64);
const __SMACK_nondet_signed_long_long_int: ref;
axiom (__SMACK_nondet_signed_long_long_int == $sub.ref(0, 39219));
procedure __SMACK_nondet_signed_long_long_int()
  returns ($r: i64);
const __SMACK_nondet_unsigned_long_long: ref;
axiom (__SMACK_nondet_unsigned_long_long == $sub.ref(0, 40251));
procedure __SMACK_nondet_unsigned_long_long()
  returns ($r: i64);
const __SMACK_nondet_unsigned_long_long_int: ref;
axiom (__SMACK_nondet_unsigned_long_long_int == $sub.ref(0, 41283));
procedure __SMACK_nondet_unsigned_long_long_int()
  returns ($r: i64);
const __VERIFIER_nondet_ulong: ref;
axiom (__VERIFIER_nondet_ulong == $sub.ref(0, 42315));
procedure __VERIFIER_nondet_ulong()
  returns ($r: i64)
{
  var $i0: i64;
$bb0:
  assume {:sourceloc "./lib/smack.c", 252, 21} true;
  assume {:verifier.code 1} true;
  assume {:sourceloc "./lib/smack.c", 252, 21} true;
  assume {:verifier.code 1} true;
  call $i0 := __VERIFIER_nondet_unsigned_long();
  call {:cexpr "smack:ext:__VERIFIER_nondet_unsigned_long"} boogie_si_record_i64($i0);
  call {:cexpr "x"} boogie_si_record_i64($i0);
  assume {:sourceloc "./lib/smack.c", 253, 3} true;
  assume {:verifier.code 0} true;
  $r := $i0;
  $exn := false;
  return;
}
const __SMACK_decls: ref;
axiom (__SMACK_decls == $sub.ref(0, 43347));
type $mop;
procedure boogie_si_record_mop(m: $mop);
const $MOP: $mop;
var $exn: bool;
var $exnv: int;
procedure $alloc(n: ref) returns (p: ref)
{
  call p := $$alloc(n);
}

procedure $malloc(n: ref) returns (p: ref)
{
  call p := $$alloc(n);
}

var $CurrAddr:ref;

procedure {:inline 1} $$alloc(n: ref) returns (p: ref);
modifies $CurrAddr;
ensures $sle.ref.bool($0.ref, n);
ensures $slt.ref.bool($0.ref, n) ==> $sge.ref.bool($sub.ref($CurrAddr, n), old($CurrAddr)) && p == old($CurrAddr);
ensures $sgt.ref.bool($CurrAddr, $0.ref) && $slt.ref.bool($CurrAddr, $MALLOC_TOP);
ensures $eq.ref.bool(n, $0.ref) ==> old($CurrAddr) == $CurrAddr && p == $0.ref;

procedure $free(p: ref);

const __SMACK_top_decl: ref;
axiom (__SMACK_top_decl == $sub.ref(0, 44379));
procedure __SMACK_top_decl.ref($p0: ref);
const __SMACK_init_func_memory_model: ref;
axiom (__SMACK_init_func_memory_model == $sub.ref(0, 45411));
procedure __SMACK_init_func_memory_model()
{
$bb0:
  assume {:sourceloc "./lib/smack.c", 526, 1} true;
  assume {:verifier.code 0} true;
  assume {:sourceloc "./lib/smack.c", 526, 1} true;
  assume {:verifier.code 0} true;
  $exn := false;
  return;
}
const llvm.dbg.value: ref;
axiom (llvm.dbg.value == $sub.ref(0, 46443));
procedure llvm.dbg.value($p0: ref, $p1: ref, $p2: ref);
const __SMACK_static_init: ref;
axiom (__SMACK_static_init == $sub.ref(0, 47475));
procedure __SMACK_static_init()
{
$bb0:
  $M.0 := .str.1.7;
  $M.1 := 0;
  call {:cexpr "errno_global"} boogie_si_record_i32(0);
  $exn := false;
  return;
}
const $u0: i32;
const $u1: i64;
procedure boogie_si_record_i32(x: i32);
procedure boogie_si_record_i64(x: i64);
procedure boogie_si_record_ref(x: ref);
procedure $initialize()
{
  call __SMACK_static_init();
  call __SMACK_init_func_memory_model();
  return;
}
