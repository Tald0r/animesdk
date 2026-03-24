#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigCityHollowMap; }
namespace MoleMole::Config { class HollowPosConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_EE242E26D904B5C5_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0x68301C0)
#define CLASS_1_EE242E26D904B5C5_METHOD_1_5EDD1D4D6D0D7582_OFFSET UNITYSDK_OFFSET(0x68309F0)
#define CLASS_1_EE242E26D904B5C5_METHOD_1_70889F446EEDCE38_OFFSET UNITYSDK_OFFSET(0x68305A0)
#define CLASS_1_EE242E26D904B5C5_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0x68300B0)

inline static constexpr unsigned int Class_1_EE242E26D904B5C5_TypeDefinitionIndex = 73318;

class Class_1_EE242E26D904B5C5 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigCityHollowMap** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigCityHollowMap**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EE242E26D904B5C5_TypeDefinitionIndex)->GetStaticField(0x41090);
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE242E26D904B5C5_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_EE242E26D904B5C5_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::HollowPosConfig* Method_1_70889F446EEDCE38(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::MoleMole::Config::HollowPosConfig*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EE242E26D904B5C5_METHOD_1_70889F446EEDCE38_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::ConfigCityHollowMap* Method_1_5EDD1D4D6D0D7582()
	{
		return ((::MoleMole::Config::ConfigCityHollowMap*(*)())((::PBYTE)hIl2Cpp + CLASS_1_EE242E26D904B5C5_METHOD_1_5EDD1D4D6D0D7582_OFFSET))();
	}
};
