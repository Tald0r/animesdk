#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define NODEGRAPH_MAINCITY_ADDPHOTOQUEST___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x7589B60)
#define NODEGRAPH_MAINCITY_ADDPHOTOQUEST___C__CTOR_OFFSET UNITYSDK_OFFSET(0x7589BA0)
#define NODEGRAPH_MAINCITY_ADDPHOTOQUEST___C__ONNODEACTIVEWITHSTATE_B__8_0_OFFSET UNITYSDK_OFFSET(0x7589BB0)
#define NODEGRAPH_MAINCITY_ADDPHOTOQUEST___C__ONNODEACTIVEWITHSTATE_B__8_1_OFFSET UNITYSDK_OFFSET(0x7589DB0)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int AddPhotoQuest___c_TypeDefinitionIndex = 63075;

	class AddPhotoQuest___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__8_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(AddPhotoQuest___c_TypeDefinitionIndex)->GetStaticField(0x32ED0);
		}
		static ::NodeGraph::MainCity::AddPhotoQuest___c** StaticGet___9()
		{
			return (::NodeGraph::MainCity::AddPhotoQuest___c**)Il2CppClass::FromTypeDefinitionIndex(AddPhotoQuest___c_TypeDefinitionIndex)->GetStaticField(0x32ED8);
		}
		static ::System::Action** StaticGet___9__8_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(AddPhotoQuest___c_TypeDefinitionIndex)->GetStaticField(0x32EE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ADDPHOTOQUEST___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ADDPHOTOQUEST___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnNodeActiveWithState_b__8_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ADDPHOTOQUEST___C__ONNODEACTIVEWITHSTATE_B__8_0_OFFSET))(this);
		}

		::System::Void _OnNodeActiveWithState_b__8_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ADDPHOTOQUEST___C__ONNODEACTIVEWITHSTATE_B__8_1_OFFSET))(this);
		}
	};
}
