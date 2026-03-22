#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowNpc; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_E21F764008BCC212_METHOD_1_074045F1FBDF8496_OFFSET UNITYSDK_OFFSET(0x951D9A0)
#define CLASS_1_E21F764008BCC212_METHOD_1_415752109343FC19_OFFSET UNITYSDK_OFFSET(0x951D820)
#define CLASS_1_E21F764008BCC212_METHOD_1_4C9717BAC49A1DCF_OFFSET UNITYSDK_OFFSET(0x951D7B0)
#define CLASS_1_E21F764008BCC212_METHOD_1_A94D0C9E450C23D2_OFFSET UNITYSDK_OFFSET(0x951D5C0)
#define CLASS_1_E21F764008BCC212_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x951D650)

inline static constexpr unsigned int Class_1_E21F764008BCC212_TypeDefinitionIndex = 39351;

class Class_1_E21F764008BCC212 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigHollowNpc** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigHollowNpc**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E21F764008BCC212_TypeDefinitionIndex)->GetStaticField(0x3CC00);
	}

	static ::MoleMole::Config::ConfigHollowNpc* Method_1_A94D0C9E450C23D2()
	{
		return ((::MoleMole::Config::ConfigHollowNpc*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E21F764008BCC212_METHOD_1_A94D0C9E450C23D2_OFFSET))();
	}

	static ::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E21F764008BCC212_METHOD_1_D0BD1377F2594D33_OFFSET))();
	}

	static ::System::Void Method_1_415752109343FC19(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E21F764008BCC212_METHOD_1_415752109343FC19_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_4C9717BAC49A1DCF(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E21F764008BCC212_METHOD_1_4C9717BAC49A1DCF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_074045F1FBDF8496(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E21F764008BCC212_METHOD_1_074045F1FBDF8496_OFFSET))(a1, a2);
	}
};
