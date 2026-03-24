#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigLanguageVideo; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGLANGUAGEVIDEODATA_CLASS_1_3F92AD00BAB25628_METHOD_1_D77C10DC6DA3E3CE_OFFSET UNITYSDK_OFFSET(0xB480480)
#define MOLEMOLE_CONFIGLANGUAGEVIDEODATA_CLASS_1_3F92AD00BAB25628__CTOR_OFFSET UNITYSDK_OFFSET(0xB480470)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigLanguageVideoData_Class_1_3F92AD00BAB25628_TypeDefinitionIndex = 63568;

	class ConfigLanguageVideoData_Class_1_3F92AD00BAB25628 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::ConfigLanguageVideo*>* Field_1_0; // 0x10
		::System::Action* Field_1_2; // 0x18
		::System::Action_1<::MoleMole::ConfigLanguageVideo*>* Field_1_3; // 0x20
		::System::Int32 Field_1_1; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLANGUAGEVIDEODATA_CLASS_1_3F92AD00BAB25628__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_D77C10DC6DA3E3CE(::MoleMole::ConfigLanguageVideo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigLanguageVideo*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLANGUAGEVIDEODATA_CLASS_1_3F92AD00BAB25628_METHOD_1_D77C10DC6DA3E3CE_OFFSET))(this, a1);
		}
	};
}
