#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class EventHandler_1; }
namespace System::Threading::Tasks { class UnobservedTaskExceptionEventArgs; }

#define MOLEMOLE_GAMEENGINE___C_METHOD_1_361C06486F56B4E7_OFFSET UNITYSDK_OFFSET(0xC223990)
#define MOLEMOLE_GAMEENGINE___C_METHOD_1_9E37F2FEADEE1288_OFFSET UNITYSDK_OFFSET(0xC223A10)
#define MOLEMOLE_GAMEENGINE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC223950)
#define MOLEMOLE_GAMEENGINE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC223980)

namespace MoleMole
{
	inline static constexpr unsigned int GameEngine___c_TypeDefinitionIndex = 54638;

	class GameEngine___c : public ::System::Object
	{
	public:
		static ::System::EventHandler_1<::System::Threading::Tasks::UnobservedTaskExceptionEventArgs*>** StaticGet___9__81_0()
		{
			return (::System::EventHandler_1<::System::Threading::Tasks::UnobservedTaskExceptionEventArgs*>**)Il2CppClass::FromTypeDefinitionIndex(GameEngine___c_TypeDefinitionIndex)->GetStaticField(0x434B0);
		}
		static ::System::Action** StaticGet___9__104_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(GameEngine___c_TypeDefinitionIndex)->GetStaticField(0x434B8);
		}
		static ::MoleMole::GameEngine___c** StaticGet___9()
		{
			return (::MoleMole::GameEngine___c**)Il2CppClass::FromTypeDefinitionIndex(GameEngine___c_TypeDefinitionIndex)->GetStaticField(0x434C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE___C__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_361C06486F56B4E7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE___C_METHOD_1_361C06486F56B4E7_OFFSET))(this);
		}

		::System::Void Method_1_9E37F2FEADEE1288(::System::Object* a1, ::System::Threading::Tasks::UnobservedTaskExceptionEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Threading::Tasks::UnobservedTaskExceptionEventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE___C_METHOD_1_9E37F2FEADEE1288_OFFSET))(this, a1, a2);
		}
	};
}
