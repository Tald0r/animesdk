#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigGachaPerformMisc_ItemRarity.h"
#include "unitysdk/MoleMole/Config/ConfigGachaTvResultGroupEffects.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigGachaPerformanceEffects; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_5893027ACC0762C1_METHOD_1_0947F577F1E5AE4F_OFFSET UNITYSDK_OFFSET(0x8BDAE70)
#define CLASS_1_5893027ACC0762C1_METHOD_1_3E8ACF14344BB3ED_OFFSET UNITYSDK_OFFSET(0x8BDAF80)
#define CLASS_1_5893027ACC0762C1_METHOD_1_8E2C129DE4FC3609_OFFSET UNITYSDK_OFFSET(0x8BDAC40)
#define CLASS_1_5893027ACC0762C1_METHOD_1_8E4C505FBFB69A25_OFFSET UNITYSDK_OFFSET(0x8BDAC00)
#define CLASS_1_5893027ACC0762C1_METHOD_1_C417778D7BEF1D1B_OFFSET UNITYSDK_OFFSET(0x8BDAE30)

inline static constexpr unsigned int Class_1_5893027ACC0762C1_TypeDefinitionIndex = 53664;

class Class_1_5893027ACC0762C1 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigGachaPerformanceEffects** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigGachaPerformanceEffects**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5893027ACC0762C1_TypeDefinitionIndex)->GetStaticField(0x35240);
	}

	static ::MoleMole::Config::ConfigGachaPerformanceEffects* Method_1_8E4C505FBFB69A25()
	{
		return ((::MoleMole::Config::ConfigGachaPerformanceEffects*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5893027ACC0762C1_METHOD_1_8E4C505FBFB69A25_OFFSET))();
	}

	static ::System::Void Method_1_8E2C129DE4FC3609(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_5893027ACC0762C1_METHOD_1_8E2C129DE4FC3609_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C417778D7BEF1D1B(::MoleMole::Config::ConfigGachaPerformanceEffects* a1)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigGachaPerformanceEffects*))((::PBYTE)hIl2Cpp + CLASS_1_5893027ACC0762C1_METHOD_1_C417778D7BEF1D1B_OFFSET))(a1);
	}

	static ::System::Void Method_1_0947F577F1E5AE4F(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5893027ACC0762C1_METHOD_1_0947F577F1E5AE4F_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Config::ConfigGachaTvResultGroupEffects Method_1_3E8ACF14344BB3ED(::System::Int32 a1, ::MoleMole::Config::ConfigGachaPerformMisc_ItemRarity a2)
	{
		return ((::MoleMole::Config::ConfigGachaTvResultGroupEffects(*)(::System::Int32, ::MoleMole::Config::ConfigGachaPerformMisc_ItemRarity))((::PBYTE)hIl2Cpp + CLASS_1_5893027ACC0762C1_METHOD_1_3E8ACF14344BB3ED_OFFSET))(a1, a2);
	}
};
