#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_2.h"

class Class_1_F50B5EAC0B6702FB;
namespace MoleMole::Config { class ConfigUIStartFunctionNode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_5315B529F0059F0A_METHOD_2_2DA8F7A684C1DC34_OFFSET UNITYSDK_OFFSET(0x5E71530)
#define CLASS_2_5315B529F0059F0A__CTOR_OFFSET UNITYSDK_OFFSET(0x5E714E0)

inline static constexpr unsigned int Class_2_5315B529F0059F0A_TypeDefinitionIndex = 40522;

class Class_2_5315B529F0059F0A : public ::Class_1_F9FBCC956DFCF137_2
{
public:
	// static const ::System::Int32 Field_2_0 = 0xFFFFFFFF; // 0x0
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_1; // 0x18

	::System::Void _ctor(::Class_1_F50B5EAC0B6702FB* a1, ::MoleMole::Config::ConfigUIStartFunctionNode* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F50B5EAC0B6702FB*, ::MoleMole::Config::ConfigUIStartFunctionNode*))((::PBYTE)hIl2Cpp + CLASS_2_5315B529F0059F0A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2DA8F7A684C1DC34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5315B529F0059F0A_METHOD_2_2DA8F7A684C1DC34_OFFSET))(this);
	}
};
