#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_2A5C64D57FF4F5FE.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInLevelSkillButtonUltBaseController; }
namespace MoleMole { class UIInLevelSkillButtonUltChildWindowController; }
namespace MoleMole { class UIWindowController; }
namespace MoleMole::Battle { class Entity; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define CLASS_1_D40845AA5D01EDA2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7D08720)
#define CLASS_1_D40845AA5D01EDA2_METHOD_1_07763A591A9D61FC_OFFSET UNITYSDK_OFFSET(0x7D09420)
#define CLASS_1_D40845AA5D01EDA2_METHOD_1_13B8B036E1B01F5F_OFFSET UNITYSDK_OFFSET(0x7D09060)
#define CLASS_1_D40845AA5D01EDA2_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x7CE3470)
#define CLASS_1_D40845AA5D01EDA2_METHOD_1_4C1C6BDA70EF0410_OFFSET UNITYSDK_OFFSET(0x7D09640)
#define CLASS_1_D40845AA5D01EDA2_METHOD_1_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x7D08790)
#define CLASS_1_D40845AA5D01EDA2_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x7D08550)
#define CLASS_1_D40845AA5D01EDA2_METHOD_1_8E89BE9866A768ED_OFFSET UNITYSDK_OFFSET(0x7CE2D80)
#define CLASS_1_D40845AA5D01EDA2_METHOD_1_D799715F2EF979EA_OFFSET UNITYSDK_OFFSET(0x7CE3770)
#define CLASS_1_D40845AA5D01EDA2_METHOD_1_D974595545978178_OFFSET UNITYSDK_OFFSET(0x7D08970)
#define CLASS_1_D40845AA5D01EDA2_METHOD_1_FFAAA55EA670DA1F_OFFSET UNITYSDK_OFFSET(0x7D08C10)
#define CLASS_1_D40845AA5D01EDA2__CTOR_OFFSET UNITYSDK_OFFSET(0x7CE2520)

inline static constexpr unsigned int Class_1_D40845AA5D01EDA2_TypeDefinitionIndex = 55453;

class Class_1_D40845AA5D01EDA2 : public ::System::Object
{
public:
	::MoleMole::EntityHandle Field_1_3; // 0x10
	::MoleMole::UIWindowController* Field_1_4; // 0x20
	::System::Collections::Generic::Dictionary_2<::Enum_3_2A5C64D57FF4F5FE, ::MoleMole::UIInLevelSkillButtonUltBaseController*>* Field_1_0; // 0x28
	::UnityEngine::Transform* Field_1_5; // 0x30
	::MoleMole::UIInLevelSkillButtonUltChildWindowController* Field_1_1; // 0x38
	::MoleMole::UIInLevelSkillButtonUltBaseController* Field_1_2; // 0x40
	::System::Boolean Field_1_8; // 0x48
	::System::Boolean Field_1_6; // 0x49
	::System::Boolean Field_1_7; // 0x4A

	::System::Void _ctor(::MoleMole::UIWindowController* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_D40845AA5D01EDA2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40845AA5D01EDA2_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_D974595545978178(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_D40845AA5D01EDA2_METHOD_1_D974595545978178_OFFSET))(this, a1);
	}

	::System::Void Method_1_8E89BE9866A768ED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40845AA5D01EDA2_METHOD_1_8E89BE9866A768ED_OFFSET))(this);
	}

	::System::Void Method_1_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40845AA5D01EDA2_METHOD_1_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::MoleMole::UIInLevelSkillButtonUltBaseController* Method_1_13B8B036E1B01F5F(::Enum_3_2A5C64D57FF4F5FE a1)
	{
		return ((::MoleMole::UIInLevelSkillButtonUltBaseController*(*)(::PVOID, ::Enum_3_2A5C64D57FF4F5FE))((::PBYTE)hIl2Cpp + CLASS_1_D40845AA5D01EDA2_METHOD_1_13B8B036E1B01F5F_OFFSET))(this, a1);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40845AA5D01EDA2_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40845AA5D01EDA2_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_1_07763A591A9D61FC(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_D40845AA5D01EDA2_METHOD_1_07763A591A9D61FC_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_FFAAA55EA670DA1F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40845AA5D01EDA2_METHOD_1_FFAAA55EA670DA1F_OFFSET))(this);
	}

	::System::Void Method_1_D799715F2EF979EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40845AA5D01EDA2_METHOD_1_D799715F2EF979EA_OFFSET))(this);
	}

	::System::Void Method_1_4C1C6BDA70EF0410(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D40845AA5D01EDA2_METHOD_1_4C1C6BDA70EF0410_OFFSET))(this, a1);
	}
};
