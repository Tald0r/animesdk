#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
class Class_1_3056A65E74601914;
namespace System { class Action; }

#define CLASS_2_51B971E69E38047E_CLASS_1_396015D62A618398_METHOD_1_BC34D12C14FA32D8_OFFSET UNITYSDK_OFFSET(0x7CB7A70)
#define CLASS_2_51B971E69E38047E_CLASS_1_396015D62A618398__CTOR_OFFSET UNITYSDK_OFFSET(0x7CB7A60)

inline static constexpr unsigned int Class_2_51B971E69E38047E_Class_1_396015D62A618398_TypeDefinitionIndex = 50692;

class Class_2_51B971E69E38047E_Class_1_396015D62A618398 : public ::System::Object
{
public:
	::Class_1_3056A65E74601914* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51B971E69E38047E_CLASS_1_396015D62A618398__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BC34D12C14FA32D8(::Class_0_16E4307DCC419505_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_51B971E69E38047E_CLASS_1_396015D62A618398_METHOD_1_BC34D12C14FA32D8_OFFSET))(this, a1);
	}
};
