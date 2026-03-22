#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define NODEGRAPH_MAINCITY_REQUESTHALLGAMEEND___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x77E11F0)
#define NODEGRAPH_MAINCITY_REQUESTHALLGAMEEND___C__CTOR_OFFSET UNITYSDK_OFFSET(0x77E1230)
#define NODEGRAPH_MAINCITY_REQUESTHALLGAMEEND___C__ONNODEACTIVE_B__6_0_OFFSET UNITYSDK_OFFSET(0x77E1240)
#define NODEGRAPH_MAINCITY_REQUESTHALLGAMEEND___C__ONNODEACTIVE_B__6_1_OFFSET UNITYSDK_OFFSET(0x77E1250)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int RequestHallGameEnd___c_TypeDefinitionIndex = 72826;

	class RequestHallGameEnd___c : public ::System::Object
	{
	public:
		static ::NodeGraph::MainCity::RequestHallGameEnd___c** StaticGet___9()
		{
			return (::NodeGraph::MainCity::RequestHallGameEnd___c**)Il2CppClass::FromTypeDefinitionIndex(RequestHallGameEnd___c_TypeDefinitionIndex)->GetStaticField(0x404D0);
		}
		static ::System::Action** StaticGet___9__6_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(RequestHallGameEnd___c_TypeDefinitionIndex)->GetStaticField(0x404D8);
		}
		static ::System::Action** StaticGet___9__6_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(RequestHallGameEnd___c_TypeDefinitionIndex)->GetStaticField(0x404E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_REQUESTHALLGAMEEND___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_REQUESTHALLGAMEEND___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnNodeActive_b__6_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_REQUESTHALLGAMEEND___C__ONNODEACTIVE_B__6_0_OFFSET))(this);
		}

		::System::Void _OnNodeActive_b__6_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_REQUESTHALLGAMEEND___C__ONNODEACTIVE_B__6_1_OFFSET))(this);
		}
	};
}
