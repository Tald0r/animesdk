#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/Struct_2_57C422EDEAAA7766.h"
#include "unitysdk/System/Span_1.h"

class Class_1_BC9D27E6028F322B;
namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELMULTICHAT_BUILDPERENTITYCHATDATA_OFFSET UNITYSDK_OFFSET(0x7A64CC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELMULTICHAT_GETAVAILABLECHATKEYS_OFFSET UNITYSDK_OFFSET(0x7A640C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELMULTICHAT_INVOKECHAT_OFFSET UNITYSDK_OFFSET(0x7A643E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELMULTICHAT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x7A64160)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELMULTICHAT__BUILDPERENTITYCHATDATA_G__BUILDENTITY_22_0_OFFSET UNITYSDK_OFFSET(0x7A652A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELMULTICHAT__CTOR_OFFSET UNITYSDK_OFFSET(0x7A652F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELMULTICHAT__INVOKECHAT_B__21_0_OFFSET UNITYSDK_OFFSET(0x7A65740)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELMULTICHAT__INVOKECHAT_B__21_1_OFFSET UNITYSDK_OFFSET(0x7A65780)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELMULTICHAT__INVOKECHAT_B__21_2_OFFSET UNITYSDK_OFFSET(0x7A657C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELMULTICHAT__REGISTERPORTS_B__20_0_OFFSET UNITYSDK_OFFSET(0x7A65380)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELMULTICHAT__REGISTERPORTS_B__20_1_OFFSET UNITYSDK_OFFSET(0x7A656C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELMULTICHAT__REGISTERPORTS_B__20_2_OFFSET UNITYSDK_OFFSET(0x7A65730)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_InLevelMultiChat_TypeDefinitionIndex = 45650;

	class LD_InLevelMultiChat : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _out; // 0xA8
		::FlowCanvas::FlowOutput* _onChatCameraBlendedIn; // 0xB0
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::Entity*>* _chatEntity2; // 0xB8
		::FlowCanvas::FlowInput* _in; // 0xC0
		::FlowCanvas::FlowOutput* _onChatUIClosed; // 0xC8
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::Entity*>* _chatEntity1; // 0xD0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* _outputData; // 0xD8
		::System::String* ChatKey; // 0xE0
		::FlowCanvas::ValueInput_1<::System::Int32>* _overriddenChatID; // 0xE8
		::FlowCanvas::FlowInput* _popUpChatUI; // 0xF0
		::FlowCanvas::FlowOutput* _onChatCameraBlendedOut; // 0xF8
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::Entity*>* _chatEntity4; // 0x100
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::Entity*>* _chatEntity3; // 0x108
		::System::Boolean EnableChatEntityIK; // 0x110
		::System::Boolean CutCameraBlendIn; // 0x111
		::System::Boolean ManuallyFinishChat; // 0x112
		::System::Boolean ManuallyStartUI; // 0x113
		::System::Boolean CutCameraBlendOut; // 0x114
		::System::Int32 ChatID; // 0x118

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELMULTICHAT__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Object*>* GetAvailableChatKeys()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELMULTICHAT_GETAVAILABLECHATKEYS_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELMULTICHAT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void InvokeChat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELMULTICHAT_INVOKECHAT_OFFSET))(this);
		}

		::System::Void BuildPerEntityChatData(::System::Span_1<::Struct_2_57C422EDEAAA7766> result)
		{
			return ((::System::Void(*)(::PVOID, ::System::Span_1<::Struct_2_57C422EDEAAA7766>))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELMULTICHAT_BUILDPERENTITYCHATDATA_OFFSET))(this, result);
		}

		::System::Void _RegisterPorts_b__20_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELMULTICHAT__REGISTERPORTS_B__20_0_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__20_1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELMULTICHAT__REGISTERPORTS_B__20_1_OFFSET))(this, f);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* _RegisterPorts_b__20_2()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELMULTICHAT__REGISTERPORTS_B__20_2_OFFSET))(this);
		}

		::System::Void _InvokeChat_b__21_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELMULTICHAT__INVOKECHAT_B__21_0_OFFSET))(this);
		}

		::System::Void _InvokeChat_b__21_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELMULTICHAT__INVOKECHAT_B__21_1_OFFSET))(this);
		}

		::System::Void _InvokeChat_b__21_2(::Class_1_BC9D27E6028F322B* chatSyncData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BC9D27E6028F322B*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELMULTICHAT__INVOKECHAT_B__21_2_OFFSET))(this, chatSyncData);
		}

		::System::Void _BuildPerEntityChatData_g__BuildEntity_22_0(::MoleMole::Battle::Entity* entity, ::MoleMole::Battle::Entity* lookAtEntity, ::Struct_2_57C422EDEAAA7766& data)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Struct_2_57C422EDEAAA7766&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_INLEVELMULTICHAT__BUILDPERENTITYCHATDATA_G__BUILDENTITY_22_0_OFFSET))(this, entity, lookAtEntity, data);
		}
	};
}
