#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_24C014472A8CBA5E.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define MOLEMOLE_PERFORMPOPSHOW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x6E4EA00)
#define MOLEMOLE_PERFORMPOPSHOW___C__CTOR_OFFSET UNITYSDK_OFFSET(0x6E4EA40)
#define MOLEMOLE_PERFORMPOPSHOW___C__PLAY_B__16_1_OFFSET UNITYSDK_OFFSET(0x6E4EB20)
#define MOLEMOLE_PERFORMPOPSHOW___C__PLAY_B__16_3_OFFSET UNITYSDK_OFFSET(0x6E4EB30)
#define MOLEMOLE_PERFORMPOPSHOW___C__PLAY_B__16_7_OFFSET UNITYSDK_OFFSET(0x6E4EA50)

namespace MoleMole
{
	inline static constexpr unsigned int PerformPopShow___c_TypeDefinitionIndex = 70349;

	class PerformPopShow___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__16_3()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(PerformPopShow___c_TypeDefinitionIndex)->GetStaticField(0x34640);
		}
		static ::System::Action_3<::System::Int32, ::System::Int32, ::Enum_3_24C014472A8CBA5E>** StaticGet___9__16_1()
		{
			return (::System::Action_3<::System::Int32, ::System::Int32, ::Enum_3_24C014472A8CBA5E>**)Il2CppClass::FromTypeDefinitionIndex(PerformPopShow___c_TypeDefinitionIndex)->GetStaticField(0x34648);
		}
		static ::System::Action** StaticGet___9__16_7()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(PerformPopShow___c_TypeDefinitionIndex)->GetStaticField(0x34650);
		}
		static ::MoleMole::PerformPopShow___c** StaticGet___9()
		{
			return (::MoleMole::PerformPopShow___c**)Il2CppClass::FromTypeDefinitionIndex(PerformPopShow___c_TypeDefinitionIndex)->GetStaticField(0x34658);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW___C__CTOR_OFFSET))(this);
		}

		::System::Void _Play_b__16_7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW___C__PLAY_B__16_7_OFFSET))(this);
		}

		::System::Void _Play_b__16_1(::System::Int32 index, ::System::Int32 playid, ::Enum_3_24C014472A8CBA5E showtype)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Enum_3_24C014472A8CBA5E))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW___C__PLAY_B__16_1_OFFSET))(this, index, playid, showtype);
		}

		::System::Void _Play_b__16_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW___C__PLAY_B__16_3_OFFSET))(this);
		}
	};
}
