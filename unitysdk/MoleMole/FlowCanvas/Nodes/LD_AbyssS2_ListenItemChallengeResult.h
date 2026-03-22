#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4A3DFBC3F76D5549.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

class Class_1_0D6706375CDAAE8C;
class Class_2_E992BBDEABA30866;
namespace FlowCanvas { class FlowOutput; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LISTENITEMCHALLENGERESULT_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0xA5EB560)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LISTENITEMCHALLENGERESULT_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0xA5EB5D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LISTENITEMCHALLENGERESULT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0xA5EAFC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LISTENITEMCHALLENGERESULT__CCTOR_OFFSET UNITYSDK_OFFSET(0xA5EB6F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LISTENITEMCHALLENGERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0xA5EB6D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LISTENITEMCHALLENGERESULT__LISTENONITEMCHALLENGERESULT_OFFSET UNITYSDK_OFFSET(0xA5EB290)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LISTENITEMCHALLENGERESULT__ONITEMDESTROY_OFFSET UNITYSDK_OFFSET(0xA5EB390)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LISTENITEMCHALLENGERESULT___BASE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0xA5EB700)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LISTENITEMCHALLENGERESULT___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0xA5EB710)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_ListenItemChallengeResult_TypeDefinitionIndex = 52905;

	class LD_AbyssS2_ListenItemChallengeResult : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		static ::Class_2_E992BBDEABA30866** StaticGet_s_data()
		{
			return (::Class_2_E992BBDEABA30866**)Il2CppClass::FromTypeDefinitionIndex(LD_AbyssS2_ListenItemChallengeResult_TypeDefinitionIndex)->GetStaticField(0x386E0);
		}
		static ::Enum_3_4A3DFBC3F76D5549* StaticGet__lastReason()
		{
			return (::Enum_3_4A3DFBC3F76D5549*)Il2CppClass::FromTypeDefinitionIndex(LD_AbyssS2_ListenItemChallengeResult_TypeDefinitionIndex)->GetStaticField(0xE0B0);
		}
		::FlowCanvas::FlowOutput* _OnEvent; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LISTENITEMCHALLENGERESULT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LISTENITEMCHALLENGERESULT__CCTOR_OFFSET))();
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LISTENITEMCHALLENGERESULT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _ListenOnItemChallengeResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LISTENITEMCHALLENGERESULT__LISTENONITEMCHALLENGERESULT_OFFSET))(this);
		}

		::System::Void _OnItemDestroy(::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* itemList, ::Enum_3_4A3DFBC3F76D5549 reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*, ::Enum_3_4A3DFBC3F76D5549))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LISTENITEMCHALLENGERESULT__ONITEMDESTROY_OFFSET))(this, itemList, reason);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LISTENITEMCHALLENGERESULT_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LISTENITEMCHALLENGERESULT_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LISTENITEMCHALLENGERESULT___BASE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LISTENITEMCHALLENGERESULT___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
