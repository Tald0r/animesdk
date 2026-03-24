#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIGLANGUAGEVIDEODATA_CLASS_1_5459D1303BBE3228_103_METHOD_1_6D8B8CD47CD59618_OFFSET UNITYSDK_OFFSET(0xC249580)
#define MOLEMOLE_CONFIGLANGUAGEVIDEODATA_CLASS_1_5459D1303BBE3228_103__CTOR_OFFSET UNITYSDK_OFFSET(0xC249570)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigLanguageVideoData_Class_1_5459D1303BBE3228_103_TypeDefinitionIndex = 63569;

	class ConfigLanguageVideoData_Class_1_5459D1303BBE3228_103 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* Field_1_2; // 0x10
		::System::String* Field_1_3; // 0x18
		::System::Action_1<::System::Single>* Field_1_0; // 0x20
		::System::Single Field_1_1; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLANGUAGEVIDEODATA_CLASS_1_5459D1303BBE3228_103__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_6D8B8CD47CD59618()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLANGUAGEVIDEODATA_CLASS_1_5459D1303BBE3228_103_METHOD_1_6D8B8CD47CD59618_OFFSET))(this);
		}
	};
}
