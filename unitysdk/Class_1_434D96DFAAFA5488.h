#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/UI/FlowerShop/EFinishJudge.h"
#include "unitysdk/MoleMole/UI/FlowerShop/ESlotType.h"
#include "unitysdk/System/Object.h"

class Class_2_A179FAEF554FEE45;
namespace UnityEngine { class Animation; }
namespace UnityEngine::Rendering::Universal::Internal { class OutlineObjectRenderer; }

#define CLASS_1_434D96DFAAFA5488_METHOD_1_08829C96B632E2FB_OFFSET UNITYSDK_OFFSET(0x7CEF4A0)
#define CLASS_1_434D96DFAAFA5488_METHOD_1_37DA83827BF938C9_OFFSET UNITYSDK_OFFSET(0x7CEEE70)
#define CLASS_1_434D96DFAAFA5488_METHOD_1_968C5793FC4AA75A_OFFSET UNITYSDK_OFFSET(0x7CEFDD0)
#define CLASS_1_434D96DFAAFA5488_METHOD_1_A160852F61E7742F_OFFSET UNITYSDK_OFFSET(0x7CEFEF0)
#define CLASS_1_434D96DFAAFA5488__CTOR_OFFSET UNITYSDK_OFFSET(0x7CEEE60)

inline static constexpr unsigned int Class_1_434D96DFAAFA5488_TypeDefinitionIndex = 56630;

class Class_1_434D96DFAAFA5488 : public ::System::Object
{
public:
	::Class_2_A179FAEF554FEE45* Field_1_0; // 0x10

	::System::Void _ctor(::Class_2_A179FAEF554FEE45* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A179FAEF554FEE45*))((::PBYTE)hIl2Cpp + CLASS_1_434D96DFAAFA5488__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_37DA83827BF938C9(::MoleMole::UI::FlowerShop::EFinishJudge a1, ::MoleMole::EntityHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UI::FlowerShop::EFinishJudge, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_1_434D96DFAAFA5488_METHOD_1_37DA83827BF938C9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_08829C96B632E2FB(::MoleMole::EntityHandle a1, ::UnityEngine::Animation*& a2, ::UnityEngine::Rendering::Universal::Internal::OutlineObjectRenderer*& a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::UnityEngine::Animation*&, ::UnityEngine::Rendering::Universal::Internal::OutlineObjectRenderer*&))((::PBYTE)hIl2Cpp + CLASS_1_434D96DFAAFA5488_METHOD_1_08829C96B632E2FB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_968C5793FC4AA75A(::MoleMole::EntityHandle a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_434D96DFAAFA5488_METHOD_1_968C5793FC4AA75A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A160852F61E7742F(::MoleMole::UI::FlowerShop::ESlotType a1, ::MoleMole::EntityHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UI::FlowerShop::ESlotType, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_1_434D96DFAAFA5488_METHOD_1_A160852F61E7742F_OFFSET))(this, a1, a2);
	}
};
