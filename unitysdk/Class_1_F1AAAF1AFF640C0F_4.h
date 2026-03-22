#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_1862835F8661A21F_452.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_1044;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F1AAAF1AFF640C0F_4_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1A32BC50)
#define CLASS_1_F1AAAF1AFF640C0F_4_METHOD_1_52F693593F7BBFE8_OFFSET UNITYSDK_OFFSET(0x1A32B840)
#define CLASS_1_F1AAAF1AFF640C0F_4_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A32B770)
#define CLASS_1_F1AAAF1AFF640C0F_4__CTOR_OFFSET UNITYSDK_OFFSET(0x1A32B7B0)

inline static constexpr unsigned int Class_1_F1AAAF1AFF640C0F_4_TypeDefinitionIndex = 80415;

class Class_1_F1AAAF1AFF640C0F_4 : public ::System::Object
{
public:
	::Struct_2_1862835F8661A21F_452 Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_1044*>* Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1AAAF1AFF640C0F_4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1AAAF1AFF640C0F_4_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_52F693593F7BBFE8(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_1_F1AAAF1AFF640C0F_4_METHOD_1_52F693593F7BBFE8_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1AAAF1AFF640C0F_4_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}
};
