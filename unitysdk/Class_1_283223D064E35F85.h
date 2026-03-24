#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class GamepadRumbleEntry; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_283223D064E35F85_METHOD_1_13EB4FEF0A1829C7_OFFSET UNITYSDK_OFFSET(0x9E56E40)
#define CLASS_1_283223D064E35F85_METHOD_1_847C577D5536D131_OFFSET UNITYSDK_OFFSET(0x9E567D0)
#define CLASS_1_283223D064E35F85_METHOD_1_917D82B3AD0E1FF9_OFFSET UNITYSDK_OFFSET(0x9E56CE0)
#define CLASS_1_283223D064E35F85__CCTOR_OFFSET UNITYSDK_OFFSET(0x9E56730)

inline static constexpr unsigned int Class_1_283223D064E35F85_TypeDefinitionIndex = 67202;

class Class_1_283223D064E35F85 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::GamepadRumbleEntry*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::GamepadRumbleEntry*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_283223D064E35F85_TypeDefinitionIndex)->GetStaticField(0x39F90);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_283223D064E35F85__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_847C577D5536D131(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_283223D064E35F85_METHOD_1_847C577D5536D131_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::GamepadRumbleEntry* Method_1_917D82B3AD0E1FF9(::System::String* a1)
	{
		return ((::MoleMole::Config::GamepadRumbleEntry*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_283223D064E35F85_METHOD_1_917D82B3AD0E1FF9_OFFSET))(a1);
	}

	static ::System::Void Method_1_13EB4FEF0A1829C7(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_283223D064E35F85_METHOD_1_13EB4FEF0A1829C7_OFFSET))(a1, a2, a3, a4);
	}
};
