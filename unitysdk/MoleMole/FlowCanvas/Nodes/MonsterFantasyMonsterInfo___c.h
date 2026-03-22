#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_9F091E965E210217_11;
namespace MoleMole::FlowCanvas::Nodes { class MonsterFantasySkillInfo; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_FLOWCANVAS_NODES_MONSTERFANTASYMONSTERINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8F0FBA0)
#define MOLEMOLE_FLOWCANVAS_NODES_MONSTERFANTASYMONSTERINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8F0FBE0)
#define MOLEMOLE_FLOWCANVAS_NODES_MONSTERFANTASYMONSTERINFO___C__TOPROTO_B__14_0_OFFSET UNITYSDK_OFFSET(0x8F0FBF0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int MonsterFantasyMonsterInfo___c_TypeDefinitionIndex = 58649;

	class MonsterFantasyMonsterInfo___c : public ::System::Object
	{
	public:
		static ::MoleMole::FlowCanvas::Nodes::MonsterFantasyMonsterInfo___c** StaticGet___9()
		{
			return (::MoleMole::FlowCanvas::Nodes::MonsterFantasyMonsterInfo___c**)Il2CppClass::FromTypeDefinitionIndex(MonsterFantasyMonsterInfo___c_TypeDefinitionIndex)->GetStaticField(0x365A0);
		}
		static ::System::Func_2<::MoleMole::FlowCanvas::Nodes::MonsterFantasySkillInfo*, ::Class_3_9F091E965E210217_11*>** StaticGet___9__14_0()
		{
			return (::System::Func_2<::MoleMole::FlowCanvas::Nodes::MonsterFantasySkillInfo*, ::Class_3_9F091E965E210217_11*>**)Il2CppClass::FromTypeDefinitionIndex(MonsterFantasyMonsterInfo___c_TypeDefinitionIndex)->GetStaticField(0x365A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_MONSTERFANTASYMONSTERINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_MONSTERFANTASYMONSTERINFO___C__CTOR_OFFSET))(this);
		}

		::Class_3_9F091E965E210217_11* _ToProto_b__14_0(::MoleMole::FlowCanvas::Nodes::MonsterFantasySkillInfo* v)
		{
			return ((::Class_3_9F091E965E210217_11*(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::MonsterFantasySkillInfo*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_MONSTERFANTASYMONSTERINFO___C__TOPROTO_B__14_0_OFFSET))(this, v);
		}
	};
}
