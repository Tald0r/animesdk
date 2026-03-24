#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_9E4D1804C70A9D58.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_288;
class Class_1_5A585DEB704A07E2;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine::UI::Extension { class ITabButtonGroup; }

#define CLASS_1_F29C68BEB3C6B152_CLASS_1_E6761800D13D7FA4_METHOD_1_F617D77D98D26950_OFFSET UNITYSDK_OFFSET(0x6B19BB0)
#define CLASS_1_F29C68BEB3C6B152_CLASS_1_E6761800D13D7FA4_METHOD_1_F95BE5279F7043DB_OFFSET UNITYSDK_OFFSET(0x6B19B60)
#define CLASS_1_F29C68BEB3C6B152_CLASS_1_E6761800D13D7FA4__CTOR_OFFSET UNITYSDK_OFFSET(0x6B19B50)

inline static constexpr unsigned int Class_1_F29C68BEB3C6B152_Class_1_E6761800D13D7FA4_TypeDefinitionIndex = 75438;

class Class_1_F29C68BEB3C6B152_Class_1_E6761800D13D7FA4 : public ::System::Object
{
public:
	::System::Func_1<::System::Int32>* Field_1_2; // 0x10
	::Class_0_16E4307DCC419505_288* Field_1_4; // 0x18
	::System::Func_1<::System::Int32>* Field_1_9; // 0x20
	::System::Action_1<::System::Int32>* Field_1_1; // 0x28
	::System::Func_2<::System::Int32, ::System::String*>* Field_1_7; // 0x30
	::System::Func_2<::System::Int32, ::Class_1_5A585DEB704A07E2*>* Field_1_8; // 0x38
	::System::Func_2<::System::Int32, ::System::Boolean>* Field_1_3; // 0x40
	::System::Func_1<::System::Int32>* Field_1_10; // 0x48
	::Struct_2_9E4D1804C70A9D58 Field_1_5; // 0x50
	::System::Boolean Field_1_6; // 0x60
	::System::Boolean Field_1_0; // 0x61

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_CLASS_1_E6761800D13D7FA4__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_F95BE5279F7043DB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_CLASS_1_E6761800D13D7FA4_METHOD_1_F95BE5279F7043DB_OFFSET))(this);
	}

	::System::Void Method_1_F617D77D98D26950(::UnityEngine::UI::Extension::ITabButtonGroup* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::ITabButtonGroup*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_CLASS_1_E6761800D13D7FA4_METHOD_1_F617D77D98D26950_OFFSET))(this, a1, a2);
	}
};
