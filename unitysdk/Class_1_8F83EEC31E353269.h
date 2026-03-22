#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigViewObjectEntityDither; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_8F83EEC31E353269_METHOD_1_074045F1FBDF8496_OFFSET UNITYSDK_OFFSET(0x99A9190)
#define CLASS_1_8F83EEC31E353269_METHOD_1_30BE13EB59A930FB_OFFSET UNITYSDK_OFFSET(0x99A9880)
#define CLASS_1_8F83EEC31E353269_METHOD_1_415752109343FC19_OFFSET UNITYSDK_OFFSET(0x99A9700)
#define CLASS_1_8F83EEC31E353269_METHOD_1_4C9717BAC49A1DCF_OFFSET UNITYSDK_OFFSET(0x99A9530)
#define CLASS_1_8F83EEC31E353269_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x99A95A0)
#define CLASS_1_8F83EEC31E353269__CTOR_OFFSET UNITYSDK_OFFSET(0x99A9180)

inline static constexpr unsigned int Class_1_8F83EEC31E353269_TypeDefinitionIndex = 51992;

class Class_1_8F83EEC31E353269 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigViewObjectEntityDither** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigViewObjectEntityDither**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8F83EEC31E353269_TypeDefinitionIndex)->GetStaticField(0x3F750);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F83EEC31E353269__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_074045F1FBDF8496(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_8F83EEC31E353269_METHOD_1_074045F1FBDF8496_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4C9717BAC49A1DCF(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_8F83EEC31E353269_METHOD_1_4C9717BAC49A1DCF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8F83EEC31E353269_METHOD_1_D0BD1377F2594D33_OFFSET))();
	}

	static ::System::Void Method_1_415752109343FC19(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8F83EEC31E353269_METHOD_1_415752109343FC19_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Config::ConfigViewObjectEntityDither* Method_1_30BE13EB59A930FB()
	{
		return ((::MoleMole::Config::ConfigViewObjectEntityDither*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8F83EEC31E353269_METHOD_1_30BE13EB59A930FB_OFFSET))();
	}
};
