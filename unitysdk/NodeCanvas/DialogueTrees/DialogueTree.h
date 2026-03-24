#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/Graph.h"

namespace NodeCanvas::DialogueTrees { class DTNode; }
namespace NodeCanvas::DialogueTrees { class DialogueTree_ActorParameter; }
namespace NodeCanvas::DialogueTrees { class IDialogueActor; }
namespace NodeCanvas::DialogueTrees { class MultipleChoiceRequestInfo; }
namespace NodeCanvas::DialogueTrees { class SubtitlesRequestInfo; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NODECANVAS_DIALOGUETREES_DIALOGUETREE_ADD_ONDIALOGUEFINISHED_OFFSET UNITYSDK_OFFSET(0x1A606790)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREE_ADD_ONDIALOGUEPAUSED_OFFSET UNITYSDK_OFFSET(0x1A606630)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREE_ADD_ONDIALOGUESTARTED_OFFSET UNITYSDK_OFFSET(0x1A6064D0)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREE_ADD_ONMULTIPLECHOICEREQUEST_OFFSET UNITYSDK_OFFSET(0x1A606A50)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREE_ADD_ONSUBTITLESREQUEST_OFFSET UNITYSDK_OFFSET(0x1A6068F0)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREE_CONTINUE_OFFSET UNITYSDK_OFFSET(0x1A606130)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREE_ENTERNODE_OFFSET UNITYSDK_OFFSET(0x1A607750)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREE_GETACTORREFERENCEBYID_OFFSET UNITYSDK_OFFSET(0x1A606FF0)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREE_GETACTORREFERENCEBYNAME_OFFSET UNITYSDK_OFFSET(0x1A607020)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREE_GETPARAMETERBYID_OFFSET UNITYSDK_OFFSET(0x1A606E90)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREE_GETPARAMETERBYNAME_OFFSET UNITYSDK_OFFSET(0x1A606F40)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREE_GET_ALLOWBLACKBOARDOVERRIDES_OFFSET UNITYSDK_OFFSET(0x1A606D30)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREE_GET_BASENODETYPE_OFFSET UNITYSDK_OFFSET(0x1A606CD0)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREE_GET_CANACCEPTVARIABLEDROPS_OFFSET UNITYSDK_OFFSET(0x1A606D40)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREE_GET_CURRENTDIALOGUE_OFFSET UNITYSDK_OFFSET(0x1A606BB0)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREE_GET_CURRENTNODE_OFFSET UNITYSDK_OFFSET(0x1A606CB0)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREE_GET_DEFINEDACTORPARAMETERNAMES_OFFSET UNITYSDK_OFFSET(0x1A606D50)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREE_GET_ISTREE_OFFSET UNITYSDK_OFFSET(0x1A606D20)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREE_GET_PREVIOUSDIALOGUE_OFFSET UNITYSDK_OFFSET(0x1A606C30)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREE_GET_REQUIRESAGENT_OFFSET UNITYSDK_OFFSET(0x1A606D00)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREE_GET_REQUIRESPRIMENODE_OFFSET UNITYSDK_OFFSET(0x1A606D10)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREE_ONDERIVEDDATADESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x1A606460)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREE_ONDERIVEDDATASERIALIZATION_OFFSET UNITYSDK_OFFSET(0x1A606400)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREE_ONGRAPHPAUSED_OFFSET UNITYSDK_OFFSET(0x1A607E30)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1A607970)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1A607D10)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREE_ONGRAPHUNPAUSED_OFFSET UNITYSDK_OFFSET(0x1A607EA0)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREE_ONGRAPHUPDATE_OFFSET UNITYSDK_OFFSET(0x1A607C20)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREE_REMOVE_ONDIALOGUEFINISHED_OFFSET UNITYSDK_OFFSET(0x1A606840)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREE_REMOVE_ONDIALOGUEPAUSED_OFFSET UNITYSDK_OFFSET(0x1A6066E0)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREE_REMOVE_ONDIALOGUESTARTED_OFFSET UNITYSDK_OFFSET(0x1A606580)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREE_REMOVE_ONMULTIPLECHOICEREQUEST_OFFSET UNITYSDK_OFFSET(0x1A606B00)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREE_REMOVE_ONSUBTITLESREQUEST_OFFSET UNITYSDK_OFFSET(0x1A6069A0)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREE_REQUESTMULTIPLECHOICES_OFFSET UNITYSDK_OFFSET(0x1A607900)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREE_REQUESTSUBTITLES_OFFSET UNITYSDK_OFFSET(0x1A607890)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREE_SETACTORREFERENCES_OFFSET UNITYSDK_OFFSET(0x1A607570)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREE_SETACTORREFERENCE_OFFSET UNITYSDK_OFFSET(0x1A6073A0)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREE_SET_CURRENTDIALOGUE_OFFSET UNITYSDK_OFFSET(0x1A606BF0)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREE_SET_CURRENTNODE_OFFSET UNITYSDK_OFFSET(0x1A606CC0)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREE_SET_PREVIOUSDIALOGUE_OFFSET UNITYSDK_OFFSET(0x1A606C70)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A608090)

namespace NodeCanvas::DialogueTrees
{
	inline static constexpr unsigned int DialogueTree_TypeDefinitionIndex = 25952;

	class DialogueTree : public ::NodeCanvas::Framework::Graph
	{
	public:
		static ::NodeCanvas::DialogueTrees::DialogueTree** StaticGet__currentDialogue_k__BackingField()
		{
			return (::NodeCanvas::DialogueTrees::DialogueTree**)Il2CppClass::FromTypeDefinitionIndex(DialogueTree_TypeDefinitionIndex)->GetStaticField(0x202B0);
		}
		static ::System::Action_1<::NodeCanvas::DialogueTrees::DialogueTree*>** StaticGet_OnDialoguePaused()
		{
			return (::System::Action_1<::NodeCanvas::DialogueTrees::DialogueTree*>**)Il2CppClass::FromTypeDefinitionIndex(DialogueTree_TypeDefinitionIndex)->GetStaticField(0x202B8);
		}
		static ::System::Action_1<::NodeCanvas::DialogueTrees::DialogueTree*>** StaticGet_OnDialogueFinished()
		{
			return (::System::Action_1<::NodeCanvas::DialogueTrees::DialogueTree*>**)Il2CppClass::FromTypeDefinitionIndex(DialogueTree_TypeDefinitionIndex)->GetStaticField(0x202C0);
		}
		static ::System::Action_1<::NodeCanvas::DialogueTrees::DialogueTree*>** StaticGet_OnDialogueStarted()
		{
			return (::System::Action_1<::NodeCanvas::DialogueTrees::DialogueTree*>**)Il2CppClass::FromTypeDefinitionIndex(DialogueTree_TypeDefinitionIndex)->GetStaticField(0x202C8);
		}
		static ::System::Action_1<::NodeCanvas::DialogueTrees::SubtitlesRequestInfo*>** StaticGet_OnSubtitlesRequest()
		{
			return (::System::Action_1<::NodeCanvas::DialogueTrees::SubtitlesRequestInfo*>**)Il2CppClass::FromTypeDefinitionIndex(DialogueTree_TypeDefinitionIndex)->GetStaticField(0x202D0);
		}
		static ::NodeCanvas::DialogueTrees::DialogueTree** StaticGet__previousDialogue_k__BackingField()
		{
			return (::NodeCanvas::DialogueTrees::DialogueTree**)Il2CppClass::FromTypeDefinitionIndex(DialogueTree_TypeDefinitionIndex)->GetStaticField(0x202D8);
		}
		static ::System::Action_1<::NodeCanvas::DialogueTrees::MultipleChoiceRequestInfo*>** StaticGet_OnMultipleChoiceRequest()
		{
			return (::System::Action_1<::NodeCanvas::DialogueTrees::MultipleChoiceRequestInfo*>**)Il2CppClass::FromTypeDefinitionIndex(DialogueTree_TypeDefinitionIndex)->GetStaticField(0x202E0);
		}
		// static const ::System::String* INSTIGATOR_NAME; // 0x0
		::System::Collections::Generic::List_1<::NodeCanvas::DialogueTrees::DialogueTree_ActorParameter*>* actorParameters; // 0xB0
		::NodeCanvas::DialogueTrees::DTNode* _currentNode_k__BackingField; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE__CTOR_OFFSET))(this);
		}

		::System::Object* OnDerivedDataSerialization()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE_ONDERIVEDDATASERIALIZATION_OFFSET))(this);
		}

		::System::Void OnDerivedDataDeserialization(::System::Object* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE_ONDERIVEDDATADESERIALIZATION_OFFSET))(this, data);
		}

		static ::System::Void add_OnDialogueStarted(::System::Action_1<::NodeCanvas::DialogueTrees::DialogueTree*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::NodeCanvas::DialogueTrees::DialogueTree*>*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE_ADD_ONDIALOGUESTARTED_OFFSET))(value);
		}

		static ::System::Void remove_OnDialogueStarted(::System::Action_1<::NodeCanvas::DialogueTrees::DialogueTree*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::NodeCanvas::DialogueTrees::DialogueTree*>*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE_REMOVE_ONDIALOGUESTARTED_OFFSET))(value);
		}

		static ::System::Void add_OnDialoguePaused(::System::Action_1<::NodeCanvas::DialogueTrees::DialogueTree*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::NodeCanvas::DialogueTrees::DialogueTree*>*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE_ADD_ONDIALOGUEPAUSED_OFFSET))(value);
		}

		static ::System::Void remove_OnDialoguePaused(::System::Action_1<::NodeCanvas::DialogueTrees::DialogueTree*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::NodeCanvas::DialogueTrees::DialogueTree*>*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE_REMOVE_ONDIALOGUEPAUSED_OFFSET))(value);
		}

		static ::System::Void add_OnDialogueFinished(::System::Action_1<::NodeCanvas::DialogueTrees::DialogueTree*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::NodeCanvas::DialogueTrees::DialogueTree*>*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE_ADD_ONDIALOGUEFINISHED_OFFSET))(value);
		}

		static ::System::Void remove_OnDialogueFinished(::System::Action_1<::NodeCanvas::DialogueTrees::DialogueTree*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::NodeCanvas::DialogueTrees::DialogueTree*>*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE_REMOVE_ONDIALOGUEFINISHED_OFFSET))(value);
		}

		static ::System::Void add_OnSubtitlesRequest(::System::Action_1<::NodeCanvas::DialogueTrees::SubtitlesRequestInfo*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::NodeCanvas::DialogueTrees::SubtitlesRequestInfo*>*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE_ADD_ONSUBTITLESREQUEST_OFFSET))(value);
		}

		static ::System::Void remove_OnSubtitlesRequest(::System::Action_1<::NodeCanvas::DialogueTrees::SubtitlesRequestInfo*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::NodeCanvas::DialogueTrees::SubtitlesRequestInfo*>*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE_REMOVE_ONSUBTITLESREQUEST_OFFSET))(value);
		}

		static ::System::Void add_OnMultipleChoiceRequest(::System::Action_1<::NodeCanvas::DialogueTrees::MultipleChoiceRequestInfo*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::NodeCanvas::DialogueTrees::MultipleChoiceRequestInfo*>*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE_ADD_ONMULTIPLECHOICEREQUEST_OFFSET))(value);
		}

		static ::System::Void remove_OnMultipleChoiceRequest(::System::Action_1<::NodeCanvas::DialogueTrees::MultipleChoiceRequestInfo*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::NodeCanvas::DialogueTrees::MultipleChoiceRequestInfo*>*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE_REMOVE_ONMULTIPLECHOICEREQUEST_OFFSET))(value);
		}

		static ::NodeCanvas::DialogueTrees::DialogueTree* get_currentDialogue()
		{
			return ((::NodeCanvas::DialogueTrees::DialogueTree*(*)())((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE_GET_CURRENTDIALOGUE_OFFSET))();
		}

		static ::System::Void set_currentDialogue(::NodeCanvas::DialogueTrees::DialogueTree* value)
		{
			return ((::System::Void(*)(::NodeCanvas::DialogueTrees::DialogueTree*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE_SET_CURRENTDIALOGUE_OFFSET))(value);
		}

		static ::NodeCanvas::DialogueTrees::DialogueTree* get_previousDialogue()
		{
			return ((::NodeCanvas::DialogueTrees::DialogueTree*(*)())((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE_GET_PREVIOUSDIALOGUE_OFFSET))();
		}

		static ::System::Void set_previousDialogue(::NodeCanvas::DialogueTrees::DialogueTree* value)
		{
			return ((::System::Void(*)(::NodeCanvas::DialogueTrees::DialogueTree*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE_SET_PREVIOUSDIALOGUE_OFFSET))(value);
		}

		::NodeCanvas::DialogueTrees::DTNode* get_currentNode()
		{
			return ((::NodeCanvas::DialogueTrees::DTNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE_GET_CURRENTNODE_OFFSET))(this);
		}

		::System::Void set_currentNode(::NodeCanvas::DialogueTrees::DTNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::DialogueTrees::DTNode*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE_SET_CURRENTNODE_OFFSET))(this, value);
		}

		::System::Type* get_baseNodeType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE_GET_BASENODETYPE_OFFSET))(this);
		}

		::System::Boolean get_requiresAgent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE_GET_REQUIRESAGENT_OFFSET))(this);
		}

		::System::Boolean get_requiresPrimeNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE_GET_REQUIRESPRIMENODE_OFFSET))(this);
		}

		::System::Boolean get_isTree()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE_GET_ISTREE_OFFSET))(this);
		}

		::System::Boolean get_allowBlackboardOverrides()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE_GET_ALLOWBLACKBOARDOVERRIDES_OFFSET))(this);
		}

		::System::Boolean get_canAcceptVariableDrops()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE_GET_CANACCEPTVARIABLEDROPS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_definedActorParameterNames()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE_GET_DEFINEDACTORPARAMETERNAMES_OFFSET))(this);
		}

		::NodeCanvas::DialogueTrees::DialogueTree_ActorParameter* GetParameterByID(::System::String* id)
		{
			return ((::NodeCanvas::DialogueTrees::DialogueTree_ActorParameter*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE_GETPARAMETERBYID_OFFSET))(this, id);
		}

		::NodeCanvas::DialogueTrees::DialogueTree_ActorParameter* GetParameterByName(::System::String* paramName)
		{
			return ((::NodeCanvas::DialogueTrees::DialogueTree_ActorParameter*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE_GETPARAMETERBYNAME_OFFSET))(this, paramName);
		}

		::NodeCanvas::DialogueTrees::IDialogueActor* GetActorReferenceByID(::System::String* id)
		{
			return ((::NodeCanvas::DialogueTrees::IDialogueActor*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE_GETACTORREFERENCEBYID_OFFSET))(this, id);
		}

		::NodeCanvas::DialogueTrees::IDialogueActor* GetActorReferenceByName(::System::String* paramName)
		{
			return ((::NodeCanvas::DialogueTrees::IDialogueActor*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE_GETACTORREFERENCEBYNAME_OFFSET))(this, paramName);
		}

		::System::Void SetActorReference(::System::String* paramName, ::NodeCanvas::DialogueTrees::IDialogueActor* actor)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::NodeCanvas::DialogueTrees::IDialogueActor*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE_SETACTORREFERENCE_OFFSET))(this, paramName, actor);
		}

		::System::Void SetActorReferences(::System::Collections::Generic::Dictionary_2<::System::String*, ::NodeCanvas::DialogueTrees::IDialogueActor*>* actors)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::NodeCanvas::DialogueTrees::IDialogueActor*>*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE_SETACTORREFERENCES_OFFSET))(this, actors);
		}

		::System::Void Continue(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE_CONTINUE_OFFSET))(this, index);
		}

		::System::Void EnterNode(::NodeCanvas::DialogueTrees::DTNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::DialogueTrees::DTNode*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE_ENTERNODE_OFFSET))(this, node);
		}

		static ::System::Void RequestSubtitles(::NodeCanvas::DialogueTrees::SubtitlesRequestInfo* info)
		{
			return ((::System::Void(*)(::NodeCanvas::DialogueTrees::SubtitlesRequestInfo*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE_REQUESTSUBTITLES_OFFSET))(info);
		}

		static ::System::Void RequestMultipleChoices(::NodeCanvas::DialogueTrees::MultipleChoiceRequestInfo* info)
		{
			return ((::System::Void(*)(::NodeCanvas::DialogueTrees::MultipleChoiceRequestInfo*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE_REQUESTMULTIPLECHOICES_OFFSET))(info);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE_ONGRAPHUPDATE_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void OnGraphPaused()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE_ONGRAPHPAUSED_OFFSET))(this);
		}

		::System::Void OnGraphUnpaused()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE_ONGRAPHUNPAUSED_OFFSET))(this);
		}
	};
}
