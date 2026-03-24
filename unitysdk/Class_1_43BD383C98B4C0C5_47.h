#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AkCallbackManager_EventCallback;
class AkExternalSourceInfoArray;
class Class_3_9A60053C76BB6B5C;
class Class_3_A72BA6D8C1BF0087;
class Class_3_A72BA6D8C1BF0087_1;
namespace UnityEngine { class GameObject; }

#define CLASS_1_43BD383C98B4C0C5_47_METHOD_1_B64C60973842FE45_OFFSET UNITYSDK_OFFSET(0x618ECE0)
#define CLASS_1_43BD383C98B4C0C5_47_POLISH_OFFSET UNITYSDK_OFFSET(0x618EC50)
#define CLASS_1_43BD383C98B4C0C5_47_RECYCLE_OFFSET UNITYSDK_OFFSET(0x618EB10)
#define CLASS_1_43BD383C98B4C0C5_47__CTOR_OFFSET UNITYSDK_OFFSET(0x618ECD0)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_47_TypeDefinitionIndex = 49495;

class Class_1_43BD383C98B4C0C5_47 : public ::System::Object
{
public:
	::Class_3_A72BA6D8C1BF0087_1* Field_1_4; // 0x10
	::AkExternalSourceInfoArray* Field_1_5; // 0x18
	::UnityEngine::GameObject* Field_1_1; // 0x20
	::Class_3_A72BA6D8C1BF0087* Field_1_2; // 0x28
	::Class_3_9A60053C76BB6B5C* Field_1_3; // 0x30
	::AkCallbackManager_EventCallback* Field_1_14; // 0x38
	::System::Int32 Field_1_8; // 0x40
	::System::UInt32 Field_1_9; // 0x44
	::System::Single Field_1_10; // 0x48
	::System::Boolean Field_1_11; // 0x4C
	::System::Boolean Field_1_13; // 0x4D
	::System::Boolean Field_1_6; // 0x4E
	::System::UInt32 Field_1_0; // 0x50
	::System::UInt32 Field_1_12; // 0x54
	::System::Single Field_1_7; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_47__CTOR_OFFSET))(this);
	}

	::System::Void Recycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_47_RECYCLE_OFFSET))(this);
	}

	::System::Void Polish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_47_POLISH_OFFSET))(this);
	}

	static ::Class_1_43BD383C98B4C0C5_47* Method_1_B64C60973842FE45()
	{
		return ((::Class_1_43BD383C98B4C0C5_47*(*)())((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_47_METHOD_1_B64C60973842FE45_OFFSET))();
	}
};
