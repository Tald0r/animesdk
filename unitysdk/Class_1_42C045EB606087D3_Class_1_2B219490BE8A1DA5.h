#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIWindowController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_42C045EB606087D3_CLASS_1_2B219490BE8A1DA5_METHOD_1_701506A06586AC12_OFFSET UNITYSDK_OFFSET(0x94C0440)
#define CLASS_1_42C045EB606087D3_CLASS_1_2B219490BE8A1DA5_METHOD_1_7934DD1AFA77F36F_OFFSET UNITYSDK_OFFSET(0x94C0640)
#define CLASS_1_42C045EB606087D3_CLASS_1_2B219490BE8A1DA5_METHOD_1_8A79FFB7FB47C009_OFFSET UNITYSDK_OFFSET(0x94C0240)
#define CLASS_1_42C045EB606087D3_CLASS_1_2B219490BE8A1DA5__CTOR_OFFSET UNITYSDK_OFFSET(0x94C01C0)

inline static constexpr unsigned int Class_1_42C045EB606087D3_Class_1_2B219490BE8A1DA5_TypeDefinitionIndex = 80229;

class Class_1_42C045EB606087D3_Class_1_2B219490BE8A1DA5 : public ::System::Object
{
public:
	::MoleMole::UIWindowController* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::UIWindowController*>* Field_1_1; // 0x18

	::System::Void _ctor(::MoleMole::UIWindowController* a1, ::MoleMole::UIWindowController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_42C045EB606087D3_CLASS_1_2B219490BE8A1DA5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_8A79FFB7FB47C009(::MoleMole::UIWindowController* a1, ::MoleMole::UIWindowController*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIWindowController*, ::MoleMole::UIWindowController*&))((::PBYTE)hIl2Cpp + CLASS_1_42C045EB606087D3_CLASS_1_2B219490BE8A1DA5_METHOD_1_8A79FFB7FB47C009_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_701506A06586AC12(::MoleMole::UIWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_42C045EB606087D3_CLASS_1_2B219490BE8A1DA5_METHOD_1_701506A06586AC12_OFFSET))(this, a1);
	}

	::MoleMole::UIWindowController* Method_1_7934DD1AFA77F36F()
	{
		return ((::MoleMole::UIWindowController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42C045EB606087D3_CLASS_1_2B219490BE8A1DA5_METHOD_1_7934DD1AFA77F36F_OFFSET))(this);
	}
};
