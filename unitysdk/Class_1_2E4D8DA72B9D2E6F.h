#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_5.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_C0C09ABD309C60F2;
namespace System { class String; }

#define CLASS_1_2E4D8DA72B9D2E6F_METHOD_1_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0x6583260)
#define CLASS_1_2E4D8DA72B9D2E6F_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x6583170)
#define CLASS_1_2E4D8DA72B9D2E6F_METHOD_1_5EBCF276C230582C_OFFSET UNITYSDK_OFFSET(0x6582F50)
#define CLASS_1_2E4D8DA72B9D2E6F_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x65830C0)
#define CLASS_1_2E4D8DA72B9D2E6F__CTOR_1_OFFSET UNITYSDK_OFFSET(0x6582F40)
#define CLASS_1_2E4D8DA72B9D2E6F__CTOR_OFFSET UNITYSDK_OFFSET(0x6582F20)

inline static constexpr unsigned int Class_1_2E4D8DA72B9D2E6F_TypeDefinitionIndex = 69484;

class Class_1_2E4D8DA72B9D2E6F : public ::System::Object
{
public:
	::Class_1_C0C09ABD309C60F2* Field_1_13; // 0x10
	::System::String* Field_1_12; // 0x18
	::Enum_3_F80BFD5B986D5503_5 Field_1_10; // 0x20
	::System::Single Field_1_4; // 0x24
	::System::Int32 Field_1_8; // 0x28
	::System::UInt32 Field_1_11; // 0x2C
	::System::UInt32 Field_1_1; // 0x30
	::System::UInt32 Field_1_2; // 0x34
	::System::Int32 Field_1_0; // 0x38
	::System::Boolean Field_1_6; // 0x3C
	::System::Boolean Field_1_9; // 0x3D
	::System::Boolean Field_1_5; // 0x3E
	::System::Boolean Field_1_7; // 0x3F
	::UnityEngine::Vector3 Field_1_3; // 0x40

	::System::Void _ctor(::System::Int32 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_2E4D8DA72B9D2E6F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E4D8DA72B9D2E6F__CTOR_1_OFFSET))(this);
	}

	::System::Void Method_1_5EBCF276C230582C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E4D8DA72B9D2E6F_METHOD_1_5EBCF276C230582C_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E4D8DA72B9D2E6F_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E4D8DA72B9D2E6F_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::Class_1_2E4D8DA72B9D2E6F* Method_1_358A144584A5DBFC()
	{
		return ((::Class_1_2E4D8DA72B9D2E6F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E4D8DA72B9D2E6F_METHOD_1_358A144584A5DBFC_OFFSET))(this);
	}
};
