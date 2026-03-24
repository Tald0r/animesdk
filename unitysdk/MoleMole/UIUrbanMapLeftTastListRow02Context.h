#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_2BA8CE33B4CFFE77;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
template <typename T> class Class_1_634159F7561ADAA0;

#define MOLEMOLE_UIURBANMAPLEFTTASTLISTROW02CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x95A7340)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapLeftTastListRow02Context_TypeDefinitionIndex = 49878;

	class UIUrbanMapLeftTastListRow02Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Func_1<::System::String*>* OverrideRawText; // 0x28
		::System::Action_1<::MoleMole::UIUrbanMapLeftTastListRow02Context*>* OnClick; // 0x30
		::Class_1_634159F7561ADAA0<::Class_1_2BA8CE33B4CFFE77*>* QuestDatas; // 0x38
		::System::String* OverrideFrameTexture; // 0x40
		::System::Int32 MapAreaId; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPLEFTTASTLISTROW02CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
