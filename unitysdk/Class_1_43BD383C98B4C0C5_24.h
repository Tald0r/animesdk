#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AkCallbackManager_EventCallback;
class AkExternalSourceInfoArray;
class Class_3_9A60053C76BB6B5C;
class Class_3_A72BA6D8C1BF0087;
class Class_3_A72BA6D8C1BF0087_1;
namespace UnityEngine { class GameObject; }

#define CLASS_1_43BD383C98B4C0C5_24_METHOD_1_B64C60973842FE45_OFFSET UNITYSDK_OFFSET(0x6B37C20)
#define CLASS_1_43BD383C98B4C0C5_24_POLISH_OFFSET UNITYSDK_OFFSET(0x6B37B90)
#define CLASS_1_43BD383C98B4C0C5_24_RECYCLE_OFFSET UNITYSDK_OFFSET(0x6B37A60)
#define CLASS_1_43BD383C98B4C0C5_24__CTOR_OFFSET UNITYSDK_OFFSET(0x6B37C10)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_24_TypeDefinitionIndex = 44981;

class Class_1_43BD383C98B4C0C5_24 : public ::System::Object
{
public:
	::Class_3_9A60053C76BB6B5C* Field_1_3; // 0x10
	::AkExternalSourceInfoArray* Field_1_5; // 0x18
	::UnityEngine::GameObject* Field_1_1; // 0x20
	::AkCallbackManager_EventCallback* Field_1_14; // 0x28
	::Class_3_A72BA6D8C1BF0087* Field_1_2; // 0x30
	::Class_3_A72BA6D8C1BF0087_1* Field_1_4; // 0x38
	::System::UInt32 Field_1_12; // 0x40
	::System::Int32 Field_1_8; // 0x44
	::System::Single Field_1_7; // 0x48
	::System::UInt32 Field_1_9; // 0x4C
	::System::Single Field_1_10; // 0x50
	::System::UInt32 Field_1_0; // 0x54
	::System::Boolean Field_1_6; // 0x58
	::System::Boolean Field_1_11; // 0x59
	::System::Boolean Field_1_13; // 0x5A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_24__CTOR_OFFSET))(this);
	}

	::System::Void Recycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_24_RECYCLE_OFFSET))(this);
	}

	::System::Void Polish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_24_POLISH_OFFSET))(this);
	}

	static ::Class_1_43BD383C98B4C0C5_24* Method_1_B64C60973842FE45()
	{
		return ((::Class_1_43BD383C98B4C0C5_24*(*)())((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_24_METHOD_1_B64C60973842FE45_OFFSET))();
	}
};
