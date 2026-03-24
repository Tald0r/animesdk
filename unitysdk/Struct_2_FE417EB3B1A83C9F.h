#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_3_F946D4081774B88D;
namespace System { class Object; }
template <typename T1, typename T2> class Class_3_34849C4AB5143A64;

inline static constexpr unsigned int Struct_2_FE417EB3B1A83C9F_TypeDefinitionIndex = 54709;

template <typename TPose, typename TIntrinsics>
struct Struct_2_FE417EB3B1A83C9F
{
	::System::Single Field_2_0; // 0x0
	::Class_3_F946D4081774B88D* Field_2_1; // 0x0
	::Class_3_34849C4AB5143A64<TPose, TIntrinsics>* Field_2_2; // 0x0
	static ::Struct_2_FE417EB3B1A83C9F<TPose, TIntrinsics>* StaticGet_Field_2_3()
	{
		return (::Struct_2_FE417EB3B1A83C9F<TPose, TIntrinsics>*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_FE417EB3B1A83C9F_TypeDefinitionIndex)->GetStaticField(0x0);
	}
};
