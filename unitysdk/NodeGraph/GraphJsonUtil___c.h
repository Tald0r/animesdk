#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeGraph { class GraphNodeBase; }
namespace NodeGraph { class GraphTask; }
namespace NodeGraph { class NodeGraphNormal; }

#define NODEGRAPH_GRAPHJSONUTIL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC301650)
#define NODEGRAPH_GRAPHJSONUTIL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC301690)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_0_OFFSET UNITYSDK_OFFSET(0xC3016A0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_10_OFFSET UNITYSDK_OFFSET(0xC3019C0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_11_OFFSET UNITYSDK_OFFSET(0xC301A10)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_12_OFFSET UNITYSDK_OFFSET(0xC301AD0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_13_OFFSET UNITYSDK_OFFSET(0xC301B20)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_14_OFFSET UNITYSDK_OFFSET(0xC301B70)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_15_OFFSET UNITYSDK_OFFSET(0xC301BC0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_16_OFFSET UNITYSDK_OFFSET(0xC301C10)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_17_OFFSET UNITYSDK_OFFSET(0xC301C60)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_18_OFFSET UNITYSDK_OFFSET(0xC301CB0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_19_OFFSET UNITYSDK_OFFSET(0xC301D10)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_1_OFFSET UNITYSDK_OFFSET(0xC3016F0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_20_OFFSET UNITYSDK_OFFSET(0xC301D60)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_21_OFFSET UNITYSDK_OFFSET(0xC301DE0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_22_OFFSET UNITYSDK_OFFSET(0xC301E30)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_23_OFFSET UNITYSDK_OFFSET(0xC301E80)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_24_OFFSET UNITYSDK_OFFSET(0xC301ED0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_25_OFFSET UNITYSDK_OFFSET(0xC301F30)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_26_OFFSET UNITYSDK_OFFSET(0xC301F80)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_27_OFFSET UNITYSDK_OFFSET(0xC301FD0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_28_OFFSET UNITYSDK_OFFSET(0xC302020)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_29_OFFSET UNITYSDK_OFFSET(0xC302070)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_2_OFFSET UNITYSDK_OFFSET(0xC301740)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_30_OFFSET UNITYSDK_OFFSET(0xC3020D0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_31_OFFSET UNITYSDK_OFFSET(0xC302120)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_32_OFFSET UNITYSDK_OFFSET(0xC302170)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_33_OFFSET UNITYSDK_OFFSET(0xC3021C0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_34_OFFSET UNITYSDK_OFFSET(0xC302210)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_35_OFFSET UNITYSDK_OFFSET(0xC302580)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_36_OFFSET UNITYSDK_OFFSET(0xC3025D0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_37_OFFSET UNITYSDK_OFFSET(0xC302620)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_38_OFFSET UNITYSDK_OFFSET(0xC302670)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_39_OFFSET UNITYSDK_OFFSET(0xC3026C0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_3_OFFSET UNITYSDK_OFFSET(0xC301790)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_40_OFFSET UNITYSDK_OFFSET(0xC302710)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_41_OFFSET UNITYSDK_OFFSET(0xC302760)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_42_OFFSET UNITYSDK_OFFSET(0xC3027B0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_43_OFFSET UNITYSDK_OFFSET(0xC302800)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_44_OFFSET UNITYSDK_OFFSET(0xC302850)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_45_OFFSET UNITYSDK_OFFSET(0xC3028A0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_46_OFFSET UNITYSDK_OFFSET(0xC3028F0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_47_OFFSET UNITYSDK_OFFSET(0xC302940)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_48_OFFSET UNITYSDK_OFFSET(0xC302990)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_49_OFFSET UNITYSDK_OFFSET(0xC3029E0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_4_OFFSET UNITYSDK_OFFSET(0xC3017E0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_50_OFFSET UNITYSDK_OFFSET(0xC302A30)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_51_OFFSET UNITYSDK_OFFSET(0xC302A80)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_52_OFFSET UNITYSDK_OFFSET(0xC302AD0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_53_OFFSET UNITYSDK_OFFSET(0xC302B20)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_54_OFFSET UNITYSDK_OFFSET(0xC302CE0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_55_OFFSET UNITYSDK_OFFSET(0xC302D30)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_56_OFFSET UNITYSDK_OFFSET(0xC302D80)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_57_OFFSET UNITYSDK_OFFSET(0xC302DE0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_5_OFFSET UNITYSDK_OFFSET(0xC301830)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_6_OFFSET UNITYSDK_OFFSET(0xC301880)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_7_OFFSET UNITYSDK_OFFSET(0xC3018D0)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_8_OFFSET UNITYSDK_OFFSET(0xC301920)
#define NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_9_OFFSET UNITYSDK_OFFSET(0xC301970)

namespace NodeGraph
{
	inline static constexpr unsigned int GraphJsonUtil___c_TypeDefinitionIndex = 45750;

	class GraphJsonUtil___c : public ::System::Object
	{
	public:
		static ::NodeGraph::GraphJsonUtil___c** StaticGet___9()
		{
			return (::NodeGraph::GraphJsonUtil___c**)Il2CppClass::FromTypeDefinitionIndex(GraphJsonUtil___c_TypeDefinitionIndex)->GetStaticField(0x46EE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C__CTOR_OFFSET))(this);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_0(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_0_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_1(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_1_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_2(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_2_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_3(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_3_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_4(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_4_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_5(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_5_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_6(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_6_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_7(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_7_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_8(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_8_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_9(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_9_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_10(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_10_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_11(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_11_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_12(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_12_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_13(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_13_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_14(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_14_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_15(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_15_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_16(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_16_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_17(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_17_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_18(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_18_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_19(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_19_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_20(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_20_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_21(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_21_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_22(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_22_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_23(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_23_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_24(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_24_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_25(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_25_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_26(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_26_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_27(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_27_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_28(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_28_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_29(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_29_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_30(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_30_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_31(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_31_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_32(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_32_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_33(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_33_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_34(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_34_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_35(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_35_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_36(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_36_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_37(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_37_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_38(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_38_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_39(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_39_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_40(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_40_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_41(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_41_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_42(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_42_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_43(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_43_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_44(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_44_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_45(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_45_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_46(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_46_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_47(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_47_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_48(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_48_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_49(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_49_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_50(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_50_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_51(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_51_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_52(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_52_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_53(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_53_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_54(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_54_OFFSET))(this, g);
		}

		::NodeGraph::GraphNodeBase* __cctor_b__4_55(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_55_OFFSET))(this, g);
		}

		::NodeGraph::GraphTask* __cctor_b__4_56(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphTask*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_56_OFFSET))(this, g);
		}

		::NodeGraph::GraphTask* __cctor_b__4_57(::NodeGraph::NodeGraphNormal* g)
		{
			return ((::NodeGraph::GraphTask*(*)(::PVOID, ::NodeGraph::NodeGraphNormal*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHJSONUTIL___C___CCTOR_B__4_57_OFFSET))(this, g);
		}
	};
}
