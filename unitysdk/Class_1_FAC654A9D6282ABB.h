#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUISound; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_FAC654A9D6282ABB_METHOD_1_468E89153934FFD0_OFFSET UNITYSDK_OFFSET(0xA0B7390)
#define CLASS_1_FAC654A9D6282ABB_METHOD_1_71C32765A2AB2645_OFFSET UNITYSDK_OFFSET(0xA0B6F00)
#define CLASS_1_FAC654A9D6282ABB_METHOD_1_73BF6620E9D26512_OFFSET UNITYSDK_OFFSET(0xA0B6DF0)
#define CLASS_1_FAC654A9D6282ABB_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0xA0B7300)

inline static constexpr unsigned int Class_1_FAC654A9D6282ABB_TypeDefinitionIndex = 36945;

class Class_1_FAC654A9D6282ABB : public ::System::Object
{
public:
	static ::MoleMole::ConfigUISound** StaticGet_Field_1_0()
	{
		return (::MoleMole::ConfigUISound**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FAC654A9D6282ABB_TypeDefinitionIndex)->GetStaticField(0x40420);
	}

	static ::MoleMole::ConfigUISound* Method_1_73BF6620E9D26512()
	{
		return ((::MoleMole::ConfigUISound*(*)())((::PBYTE)hIl2Cpp + CLASS_1_FAC654A9D6282ABB_METHOD_1_73BF6620E9D26512_OFFSET))();
	}

	static ::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FAC654A9D6282ABB_METHOD_1_F8C7231308CD2C82_OFFSET))();
	}

	static ::System::Void Method_1_71C32765A2AB2645(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_FAC654A9D6282ABB_METHOD_1_71C32765A2AB2645_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_468E89153934FFD0(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FAC654A9D6282ABB_METHOD_1_468E89153934FFD0_OFFSET))(a1, a2, a3, a4);
	}
};
