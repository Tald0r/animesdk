#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigCameraTelescope; }
namespace MoleMole { class ConfigUIStoreCamera; }
namespace MoleMole { class UIStorePageConfig; }
namespace MoleMole { class UIVirtualCameraConfigs; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_10AB0EF45AADD1CF_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0x64B4550)
#define CLASS_1_10AB0EF45AADD1CF_METHOD_1_4212C94737A1B198_OFFSET UNITYSDK_OFFSET(0x64B4B40)
#define CLASS_1_10AB0EF45AADD1CF_METHOD_1_9E229C3A59E90EB5_OFFSET UNITYSDK_OFFSET(0x64B48C0)
#define CLASS_1_10AB0EF45AADD1CF_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0x64B47B0)
#define CLASS_1_10AB0EF45AADD1CF_METHOD_1_E0F3E10268D4D1A3_OFFSET UNITYSDK_OFFSET(0x64B4A00)
#define CLASS_1_10AB0EF45AADD1CF_METHOD_1_EDB392227B59A37D_OFFSET UNITYSDK_OFFSET(0x64B4410)

inline static constexpr unsigned int Class_1_10AB0EF45AADD1CF_TypeDefinitionIndex = 47236;

class Class_1_10AB0EF45AADD1CF : public ::System::Object
{
public:
	static ::MoleMole::ConfigUIStoreCamera** StaticGet_Field_1_0()
	{
		return (::MoleMole::ConfigUIStoreCamera**)Il2CppClass::FromTypeDefinitionIndex(Class_1_10AB0EF45AADD1CF_TypeDefinitionIndex)->GetStaticField(0x2EBE0);
	}

	static ::MoleMole::UIStorePageConfig* Method_1_EDB392227B59A37D(::System::String* a1)
	{
		return ((::MoleMole::UIStorePageConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_10AB0EF45AADD1CF_METHOD_1_EDB392227B59A37D_OFFSET))(a1);
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_10AB0EF45AADD1CF_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_10AB0EF45AADD1CF_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::UIVirtualCameraConfigs* Method_1_9E229C3A59E90EB5(::System::String* a1)
	{
		return ((::MoleMole::UIVirtualCameraConfigs*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_10AB0EF45AADD1CF_METHOD_1_9E229C3A59E90EB5_OFFSET))(a1);
	}

	static ::MoleMole::ConfigCameraTelescope* Method_1_E0F3E10268D4D1A3(::System::String* a1)
	{
		return ((::MoleMole::ConfigCameraTelescope*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_10AB0EF45AADD1CF_METHOD_1_E0F3E10268D4D1A3_OFFSET))(a1);
	}

	static ::MoleMole::ConfigUIStoreCamera* Method_1_4212C94737A1B198()
	{
		return ((::MoleMole::ConfigUIStoreCamera*(*)())((::PBYTE)hIl2Cpp + CLASS_1_10AB0EF45AADD1CF_METHOD_1_4212C94737A1B198_OFFSET))();
	}
};
