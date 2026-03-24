#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4A563BC3F782542A.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

class Class_1_0D6706375CDAAE8C;
class Class_2_E992BBDEABA30866;
namespace FlowCanvas { class FlowOutput; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LISTENITEMCHALLENGERESULT_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0xA7D5360)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LISTENITEMCHALLENGERESULT_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0xA7D53D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LISTENITEMCHALLENGERESULT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0xA7D4DC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LISTENITEMCHALLENGERESULT__CCTOR_OFFSET UNITYSDK_OFFSET(0xA7D54F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LISTENITEMCHALLENGERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0xA7D54D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LISTENITEMCHALLENGERESULT__LISTENONITEMCHALLENGERESULT_OFFSET UNITYSDK_OFFSET(0xA7D5090)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LISTENITEMCHALLENGERESULT__ONITEMDESTROY_OFFSET UNITYSDK_OFFSET(0xA7D5190)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LISTENITEMCHALLENGERESULT___BASE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0xA7D5500)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LISTENITEMCHALLENGERESULT___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0xA7D5510)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_ListenItemChallengeResult_TypeDefinitionIndex = 59036;

	class LD_AbyssS2_ListenItemChallengeResult : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		static ::Class_2_E992BBDEABA30866** StaticGet_s_data()
		{
			return (::Class_2_E992BBDEABA30866**)Il2CppClass::FromTypeDefinitionIndex(LD_AbyssS2_ListenItemChallengeResult_TypeDefinitionIndex)->GetStaticField(0x3B2F0);
		}
		static ::Enum_3_4A563BC3F782542A* StaticGet__lastReason()
		{
			return (::Enum_3_4A563BC3F782542A*)Il2CppClass::FromTypeDefinitionIndex(LD_AbyssS2_ListenItemChallengeResult_TypeDefinitionIndex)->GetStaticField(0xE6C0);
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

		::System::Void _OnItemDestroy(::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* itemList, ::Enum_3_4A563BC3F782542A reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*, ::Enum_3_4A563BC3F782542A))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LISTENITEMCHALLENGERESULT__ONITEMDESTROY_OFFSET))(this, itemList, reason);
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
