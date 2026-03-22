#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4FB4BBF8DD771DEE.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_240;
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_1747DAB17F36B4DF_GET_SOUNDACTIONSOURCEHINT_OFFSET UNITYSDK_OFFSET(0xDE8F250)
#define CLASS_1_1747DAB17F36B4DF_GET_SOUNDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xDE8F240)
#define CLASS_1_1747DAB17F36B4DF_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xDE8F270)
#define CLASS_1_1747DAB17F36B4DF_METHOD_1_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0xDE8F470)
#define CLASS_1_1747DAB17F36B4DF_METHOD_1_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0xDE8F5B0)
#define CLASS_1_1747DAB17F36B4DF__CTOR_OFFSET UNITYSDK_OFFSET(0xDE8F260)

inline static constexpr unsigned int Class_1_1747DAB17F36B4DF_TypeDefinitionIndex = 61054;

class Class_1_1747DAB17F36B4DF : public ::System::Object
{
public:
	static ::UnityEngine::Vector3* StaticGet_Field_1_7()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1747DAB17F36B4DF_TypeDefinitionIndex)->GetStaticField(0x9F10);
	}
	static ::UnityEngine::Vector3* StaticGet_Field_1_6()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1747DAB17F36B4DF_TypeDefinitionIndex)->GetStaticField(0x9F1C);
	}
	::UnityEngine::GameObject* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::Class_0_16E4307DCC419505_240* Field_1_5; // 0x20
	::System::Int32 Field_1_2; // 0x28
	::System::Boolean Field_1_8; // 0x2C
	::System::Boolean Field_1_4; // 0x2D
	::System::UInt64 Field_1_9; // 0x30
	::System::Single Field_1_10; // 0x38
	::Enum_3_4FB4BBF8DD771DEE Field_1_3; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1747DAB17F36B4DF__CTOR_OFFSET))(this);
	}

	::UnityEngine::GameObject* get_soundGameObject()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1747DAB17F36B4DF_GET_SOUNDGAMEOBJECT_OFFSET))(this);
	}

	::System::String* get_soundActionSourceHint()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1747DAB17F36B4DF_GET_SOUNDACTIONSOURCEHINT_OFFSET))(this);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1747DAB17F36B4DF_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_1_775B6D644F07B554()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1747DAB17F36B4DF_METHOD_1_775B6D644F07B554_OFFSET))(this);
	}

	::System::Void Method_1_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1747DAB17F36B4DF_METHOD_1_F5447CD65612575D_OFFSET))(this);
	}
};
