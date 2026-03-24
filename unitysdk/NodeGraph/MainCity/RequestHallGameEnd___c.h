#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define NODEGRAPH_MAINCITY_REQUESTHALLGAMEEND___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC303120)
#define NODEGRAPH_MAINCITY_REQUESTHALLGAMEEND___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC303160)
#define NODEGRAPH_MAINCITY_REQUESTHALLGAMEEND___C__ONNODEACTIVE_B__6_0_OFFSET UNITYSDK_OFFSET(0xC303170)
#define NODEGRAPH_MAINCITY_REQUESTHALLGAMEEND___C__ONNODEACTIVE_B__6_1_OFFSET UNITYSDK_OFFSET(0xC303180)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int RequestHallGameEnd___c_TypeDefinitionIndex = 72520;

	class RequestHallGameEnd___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__6_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(RequestHallGameEnd___c_TypeDefinitionIndex)->GetStaticField(0x44660);
		}
		static ::NodeGraph::MainCity::RequestHallGameEnd___c** StaticGet___9()
		{
			return (::NodeGraph::MainCity::RequestHallGameEnd___c**)Il2CppClass::FromTypeDefinitionIndex(RequestHallGameEnd___c_TypeDefinitionIndex)->GetStaticField(0x44668);
		}
		static ::System::Action** StaticGet___9__6_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(RequestHallGameEnd___c_TypeDefinitionIndex)->GetStaticField(0x44670);
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
