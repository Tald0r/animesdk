#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/MoleMole/InLevelPauseLevelTab.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_62E52D920DDE11BD___C_METHOD_1_D237B32FC43845A5_OFFSET UNITYSDK_OFFSET(0x6D38590)
#define CLASS_2_62E52D920DDE11BD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x6D38540)
#define CLASS_2_62E52D920DDE11BD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x6D38580)

inline static constexpr unsigned int Class_2_62E52D920DDE11BD___c_TypeDefinitionIndex = 42385;

class Class_2_62E52D920DDE11BD___c : public ::System::Object
{
public:
	static ::Class_2_62E52D920DDE11BD___c** StaticGet___9()
	{
		return (::Class_2_62E52D920DDE11BD___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_62E52D920DDE11BD___c_TypeDefinitionIndex)->GetStaticField(0x42800);
	}
	static ::System::Action_1<::System::Collections::Generic::Dictionary_2<::MoleMole::InLevelPauseLevelTab, ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*>*>** StaticGet___9__53_0()
	{
		return (::System::Action_1<::System::Collections::Generic::Dictionary_2<::MoleMole::InLevelPauseLevelTab, ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_62E52D920DDE11BD___c_TypeDefinitionIndex)->GetStaticField(0x42808);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_62E52D920DDE11BD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62E52D920DDE11BD___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D237B32FC43845A5(::System::Collections::Generic::Dictionary_2<::MoleMole::InLevelPauseLevelTab, ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::MoleMole::InLevelPauseLevelTab, ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*>*))((::PBYTE)hIl2Cpp + CLASS_2_62E52D920DDE11BD___C_METHOD_1_D237B32FC43845A5_OFFSET))(this, a1);
	}
};
