#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_1862835F8661A21F_603.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_959;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F1AAAF1AFF640C0F_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1A162AB0)
#define CLASS_1_F1AAAF1AFF640C0F_METHOD_1_52F693593F7BBFE8_OFFSET UNITYSDK_OFFSET(0x1A162550)
#define CLASS_1_F1AAAF1AFF640C0F_METHOD_1_C4297EFF013E4E78_OFFSET UNITYSDK_OFFSET(0x1A162260)
#define CLASS_1_F1AAAF1AFF640C0F_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A161FF0)
#define CLASS_1_F1AAAF1AFF640C0F__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1621D0)

inline static constexpr unsigned int Class_1_F1AAAF1AFF640C0F_TypeDefinitionIndex = 34263;

class Class_1_F1AAAF1AFF640C0F : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x192; // 0x0
	// static const ::System::Int32 Field_1_1 = 0x3E9; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x3ED; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3EE; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x3EF; // 0x0
	::Struct_2_1862835F8661A21F_603 Field_1_5; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_959*>* Field_1_6; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1AAAF1AFF640C0F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1AAAF1AFF640C0F_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_959* Method_1_C4297EFF013E4E78(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_959*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F1AAAF1AFF640C0F_METHOD_1_C4297EFF013E4E78_OFFSET))(this, a1);
	}

	::System::Void Method_1_52F693593F7BBFE8(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_1_F1AAAF1AFF640C0F_METHOD_1_52F693593F7BBFE8_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1AAAF1AFF640C0F_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}
};
