#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class Class_2_4D5E634299582EA8;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ShaderVariantCollection; }

#define CLASS_2_4D5E634299582EA8_CLASS_1_DE156D315A506783_2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9D372E0)
#define CLASS_2_4D5E634299582EA8_CLASS_1_DE156D315A506783_2_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9D37B20)
#define CLASS_2_4D5E634299582EA8_CLASS_1_DE156D315A506783_2_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9D37B80)
#define CLASS_2_4D5E634299582EA8_CLASS_1_DE156D315A506783_2_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x9D37B30)
#define CLASS_2_4D5E634299582EA8_CLASS_1_DE156D315A506783_2_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9D372D0)
#define CLASS_2_4D5E634299582EA8_CLASS_1_DE156D315A506783_2__CTOR_OFFSET UNITYSDK_OFFSET(0x9D372C0)

inline static constexpr unsigned int Class_2_4D5E634299582EA8_Class_1_DE156D315A506783_2_TypeDefinitionIndex = 71706;

class Class_2_4D5E634299582EA8_Class_1_DE156D315A506783_2 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_1_6; // 0x10
	::System::String* Field_1_3; // 0x18
	::Foundation::AssetRequestHandle Field_1_13; // 0x20
	::System::Action_1<::System::Single>* Field_1_5; // 0x40
	::System::Object* Field_1_1; // 0x48
	::Class_2_4D5E634299582EA8* Field_1_2; // 0x50
	::UnityEngine::ShaderVariantCollection* Field_1_12; // 0x58
	::System::Collections::Generic::List_1<::System::Boolean>* Field_1_8; // 0x60
	::System::Collections::Generic::List_1<::System::String*>* Field_1_7; // 0x68
	::System::Single Field_1_4; // 0x70
	::System::Int32 Field_1_11; // 0x74
	::System::Int32 Field_1_10; // 0x78
	::System::Int32 Field_1_0; // 0x7C
	::System::Single Field_1_9; // 0x80

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4D5E634299582EA8_CLASS_1_DE156D315A506783_2__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D5E634299582EA8_CLASS_1_DE156D315A506783_2_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D5E634299582EA8_CLASS_1_DE156D315A506783_2_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D5E634299582EA8_CLASS_1_DE156D315A506783_2_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D5E634299582EA8_CLASS_1_DE156D315A506783_2_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D5E634299582EA8_CLASS_1_DE156D315A506783_2_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
