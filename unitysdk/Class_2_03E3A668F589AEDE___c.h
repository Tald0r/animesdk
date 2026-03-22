#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::GalGame { class MainCityChatRandomChoiceDisplayItem; }
namespace MoleMole::GalGame { class MainCityChatTransitionDisplayItem; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Linq { template <typename T1, typename T2> class IGrouping_2; }

#define CLASS_2_03E3A668F589AEDE___C_METHOD_1_3E97F57C4ABE609F_OFFSET UNITYSDK_OFFSET(0xB80E560)
#define CLASS_2_03E3A668F589AEDE___C_METHOD_1_89937E682FED6CB1_OFFSET UNITYSDK_OFFSET(0xB80E590)
#define CLASS_2_03E3A668F589AEDE___C_METHOD_1_9CD8505D6E83E8D1_OFFSET UNITYSDK_OFFSET(0xB80E580)
#define CLASS_2_03E3A668F589AEDE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB80E510)
#define CLASS_2_03E3A668F589AEDE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB80E550)

inline static constexpr unsigned int Class_2_03E3A668F589AEDE___c_TypeDefinitionIndex = 65423;

class Class_2_03E3A668F589AEDE___c : public ::System::Object
{
public:
	static ::System::Func_2<::MoleMole::GalGame::MainCityChatRandomChoiceDisplayItem*, ::MoleMole::GalGame::MainCityChatTransitionDisplayItem*>** StaticGet___9__2_2()
	{
		return (::System::Func_2<::MoleMole::GalGame::MainCityChatRandomChoiceDisplayItem*, ::MoleMole::GalGame::MainCityChatTransitionDisplayItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_03E3A668F589AEDE___c_TypeDefinitionIndex)->GetStaticField(0x314F0);
	}
	static ::Class_2_03E3A668F589AEDE___c** StaticGet___9()
	{
		return (::Class_2_03E3A668F589AEDE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_03E3A668F589AEDE___c_TypeDefinitionIndex)->GetStaticField(0x314F8);
	}
	static ::System::Func_2<::MoleMole::GalGame::MainCityChatRandomChoiceDisplayItem*, ::System::Int32>** StaticGet___9__2_0()
	{
		return (::System::Func_2<::MoleMole::GalGame::MainCityChatRandomChoiceDisplayItem*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_03E3A668F589AEDE___c_TypeDefinitionIndex)->GetStaticField(0x31500);
	}
	static ::System::Func_2<::System::Linq::IGrouping_2<::System::Int32, ::MoleMole::GalGame::MainCityChatRandomChoiceDisplayItem*>*, ::MoleMole::GalGame::MainCityChatRandomChoiceDisplayItem*>** StaticGet___9__2_1()
	{
		return (::System::Func_2<::System::Linq::IGrouping_2<::System::Int32, ::MoleMole::GalGame::MainCityChatRandomChoiceDisplayItem*>*, ::MoleMole::GalGame::MainCityChatRandomChoiceDisplayItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_03E3A668F589AEDE___c_TypeDefinitionIndex)->GetStaticField(0x31508);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_03E3A668F589AEDE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_03E3A668F589AEDE___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_3E97F57C4ABE609F(::MoleMole::GalGame::MainCityChatRandomChoiceDisplayItem* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::GalGame::MainCityChatRandomChoiceDisplayItem*))((::PBYTE)hIl2Cpp + CLASS_2_03E3A668F589AEDE___C_METHOD_1_3E97F57C4ABE609F_OFFSET))(this, a1);
	}

	::MoleMole::GalGame::MainCityChatTransitionDisplayItem* Method_1_9CD8505D6E83E8D1(::MoleMole::GalGame::MainCityChatRandomChoiceDisplayItem* a1)
	{
		return ((::MoleMole::GalGame::MainCityChatTransitionDisplayItem*(*)(::PVOID, ::MoleMole::GalGame::MainCityChatRandomChoiceDisplayItem*))((::PBYTE)hIl2Cpp + CLASS_2_03E3A668F589AEDE___C_METHOD_1_9CD8505D6E83E8D1_OFFSET))(this, a1);
	}

	::MoleMole::GalGame::MainCityChatRandomChoiceDisplayItem* Method_1_89937E682FED6CB1(::System::Linq::IGrouping_2<::System::Int32, ::MoleMole::GalGame::MainCityChatRandomChoiceDisplayItem*>* a1)
	{
		return ((::MoleMole::GalGame::MainCityChatRandomChoiceDisplayItem*(*)(::PVOID, ::System::Linq::IGrouping_2<::System::Int32, ::MoleMole::GalGame::MainCityChatRandomChoiceDisplayItem*>*))((::PBYTE)hIl2Cpp + CLASS_2_03E3A668F589AEDE___C_METHOD_1_89937E682FED6CB1_OFFSET))(this, a1);
	}
};
