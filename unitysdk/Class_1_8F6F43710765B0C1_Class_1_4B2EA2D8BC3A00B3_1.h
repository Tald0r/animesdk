#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_8F6F43710765B0C1;
class Class_1_A8C552A044C6C032;
namespace System { class String; }

#define CLASS_1_8F6F43710765B0C1_CLASS_1_4B2EA2D8BC3A00B3_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xF42C350)
#define CLASS_1_8F6F43710765B0C1_CLASS_1_4B2EA2D8BC3A00B3_1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF42D5C0)
#define CLASS_1_8F6F43710765B0C1_CLASS_1_4B2EA2D8BC3A00B3_1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF42D620)
#define CLASS_1_8F6F43710765B0C1_CLASS_1_4B2EA2D8BC3A00B3_1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xF42D5D0)
#define CLASS_1_8F6F43710765B0C1_CLASS_1_4B2EA2D8BC3A00B3_1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF42C340)
#define CLASS_1_8F6F43710765B0C1_CLASS_1_4B2EA2D8BC3A00B3_1__CTOR_OFFSET UNITYSDK_OFFSET(0xF42C330)

inline static constexpr unsigned int Class_1_8F6F43710765B0C1_Class_1_4B2EA2D8BC3A00B3_1_TypeDefinitionIndex = 44507;

class Class_1_8F6F43710765B0C1_Class_1_4B2EA2D8BC3A00B3_1 : public ::System::Object
{
public:
	::System::String* Field_1_6; // 0x10
	::Class_1_A8C552A044C6C032* Field_1_3; // 0x18
	::Foundation::AssetRequestHandle Field_1_7; // 0x20
	::Class_1_8F6F43710765B0C1* Field_1_2; // 0x40
	::System::String* Field_1_4; // 0x48
	::Foundation::AssetRequestHandle Field_1_5; // 0x50
	::System::Int32 Field_1_0; // 0x70
	::System::Single Field_1_1; // 0x74

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8F6F43710765B0C1_CLASS_1_4B2EA2D8BC3A00B3_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F6F43710765B0C1_CLASS_1_4B2EA2D8BC3A00B3_1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F6F43710765B0C1_CLASS_1_4B2EA2D8BC3A00B3_1_MOVENEXT_OFFSET))(this);
	}

	::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F6F43710765B0C1_CLASS_1_4B2EA2D8BC3A00B3_1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F6F43710765B0C1_CLASS_1_4B2EA2D8BC3A00B3_1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F6F43710765B0C1_CLASS_1_4B2EA2D8BC3A00B3_1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
