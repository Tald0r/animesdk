#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EtherEyesObjectType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEtherEyes; }
namespace MoleMole::Config { class EtherEyesObjectTypeDefaultConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_DC66303BD13D3AA5_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0x835D5C0)
#define CLASS_1_DC66303BD13D3AA5_METHOD_1_2F0376A3DE05C83A_OFFSET UNITYSDK_OFFSET(0x835D420)
#define CLASS_1_DC66303BD13D3AA5_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0x835D4B0)
#define CLASS_1_DC66303BD13D3AA5_METHOD_1_AAE354F135363483_OFFSET UNITYSDK_OFFSET(0x835D800)

inline static constexpr unsigned int Class_1_DC66303BD13D3AA5_TypeDefinitionIndex = 76785;

class Class_1_DC66303BD13D3AA5 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigEtherEyes** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigEtherEyes**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DC66303BD13D3AA5_TypeDefinitionIndex)->GetStaticField(0x42D00);
	}

	static ::MoleMole::Config::ConfigEtherEyes* Method_1_2F0376A3DE05C83A()
	{
		return ((::MoleMole::Config::ConfigEtherEyes*(*)())((::PBYTE)hIl2Cpp + CLASS_1_DC66303BD13D3AA5_METHOD_1_2F0376A3DE05C83A_OFFSET))();
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DC66303BD13D3AA5_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_DC66303BD13D3AA5_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::EtherEyesObjectTypeDefaultConfig* Method_1_AAE354F135363483(::MoleMole::Config::EtherEyesObjectType a1)
	{
		return ((::MoleMole::Config::EtherEyesObjectTypeDefaultConfig*(*)(::MoleMole::Config::EtherEyesObjectType))((::PBYTE)hIl2Cpp + CLASS_1_DC66303BD13D3AA5_METHOD_1_AAE354F135363483_OFFSET))(a1);
	}
};
