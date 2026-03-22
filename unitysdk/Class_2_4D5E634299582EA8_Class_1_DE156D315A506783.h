#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class Class_2_4D5E634299582EA8;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ShaderVariantCollection; }

#define CLASS_2_4D5E634299582EA8_CLASS_1_DE156D315A506783_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xCA06BC0)
#define CLASS_2_4D5E634299582EA8_CLASS_1_DE156D315A506783_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xCA07440)
#define CLASS_2_4D5E634299582EA8_CLASS_1_DE156D315A506783_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xCA074A0)
#define CLASS_2_4D5E634299582EA8_CLASS_1_DE156D315A506783_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xCA07450)
#define CLASS_2_4D5E634299582EA8_CLASS_1_DE156D315A506783_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCA06BB0)
#define CLASS_2_4D5E634299582EA8_CLASS_1_DE156D315A506783__CTOR_OFFSET UNITYSDK_OFFSET(0xCA06BA0)

inline static constexpr unsigned int Class_2_4D5E634299582EA8_Class_1_DE156D315A506783_TypeDefinitionIndex = 71690;

class Class_2_4D5E634299582EA8_Class_1_DE156D315A506783 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_1_6; // 0x10
	::System::Object* Field_1_1; // 0x18
	::System::String* Field_1_3; // 0x20
	::System::Collections::Generic::List_1<::System::String*>* Field_1_5; // 0x28
	::System::Collections::Generic::List_1<::System::Boolean>* Field_1_7; // 0x30
	::System::Action_1<::System::Single>* Field_1_4; // 0x38
	::Foundation::AssetRequestHandle Field_1_11; // 0x40
	::Class_2_4D5E634299582EA8* Field_1_2; // 0x60
	::UnityEngine::ShaderVariantCollection* Field_1_10; // 0x68
	::System::Int32 Field_1_8; // 0x70
	::System::Int32 Field_1_9; // 0x74
	::System::Int32 Field_1_0; // 0x78

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4D5E634299582EA8_CLASS_1_DE156D315A506783__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D5E634299582EA8_CLASS_1_DE156D315A506783_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D5E634299582EA8_CLASS_1_DE156D315A506783_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D5E634299582EA8_CLASS_1_DE156D315A506783_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D5E634299582EA8_CLASS_1_DE156D315A506783_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D5E634299582EA8_CLASS_1_DE156D315A506783_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
