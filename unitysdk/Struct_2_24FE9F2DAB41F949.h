#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_F448758FAF3F7C96.h"
#include "unitysdk/Struct_2_FE417EB3B1A83C9F.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
template <typename T1, typename T2, typename T3> class Class_0_16E4307DCC41950C_14;
template <typename T1, typename T2, typename T3> class Class_1_1CAEB54A74C60892;

inline static constexpr unsigned int Struct_2_24FE9F2DAB41F949_TypeDefinitionIndex = 41756;

template <typename TPose, typename TIntrinsics, typename TOuterCtx>
struct Struct_2_24FE9F2DAB41F949
{
	// static const ::System::Single Field_2_0; // 0x0
	::Class_0_16E4307DCC41950C_14<TPose, TIntrinsics, ::Struct_2_F448758FAF3F7C96<TOuterCtx>>* Field_2_1; // 0x0
	::System::Single Field_2_2; // 0x0
	::Struct_2_FE417EB3B1A83C9F<TPose, TIntrinsics> Field_2_3; // 0x0
};
