#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::DialogueTrees { class DialogueTree_ActorParameter; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define NODECANVAS_DIALOGUETREES_DIALOGUETREE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A608120)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A608160)
#define NODECANVAS_DIALOGUETREES_DIALOGUETREE___C__GET_DEFINEDACTORPARAMETERNAMES_B__46_0_OFFSET UNITYSDK_OFFSET(0x1A608170)

namespace NodeCanvas::DialogueTrees
{
	inline static constexpr unsigned int DialogueTree___c_TypeDefinitionIndex = 25959;

	class DialogueTree___c : public ::System::Object
	{
	public:
		static ::NodeCanvas::DialogueTrees::DialogueTree___c** StaticGet___9()
		{
			return (::NodeCanvas::DialogueTrees::DialogueTree___c**)Il2CppClass::FromTypeDefinitionIndex(DialogueTree___c_TypeDefinitionIndex)->GetStaticField(0x202F0);
		}
		static ::System::Func_2<::NodeCanvas::DialogueTrees::DialogueTree_ActorParameter*, ::System::String*>** StaticGet___9__46_0()
		{
			return (::System::Func_2<::NodeCanvas::DialogueTrees::DialogueTree_ActorParameter*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DialogueTree___c_TypeDefinitionIndex)->GetStaticField(0x202F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE___C__CTOR_OFFSET))(this);
		}

		::System::String* _get_definedActorParameterNames_b__46_0(::NodeCanvas::DialogueTrees::DialogueTree_ActorParameter* r)
		{
			return ((::System::String*(*)(::PVOID, ::NodeCanvas::DialogueTrees::DialogueTree_ActorParameter*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DIALOGUETREE___C__GET_DEFINEDACTORPARAMETERNAMES_B__46_0_OFFSET))(this, r);
		}
	};
}
