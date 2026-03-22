#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_455124A410922D94.h"

class Class_1_11A58A840528E5B2;
class Class_1_2EF69FD7F867E7F6;
class Class_2_A8B97606E71328D6;
class Class_3_16ED8773BF120B29;
namespace MoleMole { class UIHollowMainPageController; }

#define CLASS_5_A2DD7434967B6CD8_METHOD_5_E9A575D18A0748D9_1_OFFSET UNITYSDK_OFFSET(0xF4A9ED0)
#define CLASS_5_A2DD7434967B6CD8_METHOD_5_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0xF4A9E60)
#define CLASS_5_A2DD7434967B6CD8__CTOR_OFFSET UNITYSDK_OFFSET(0xF4A9DC0)

inline static constexpr unsigned int Class_5_A2DD7434967B6CD8_TypeDefinitionIndex = 54286;

class Class_5_A2DD7434967B6CD8 : public ::Class_4_455124A410922D94<::Class_3_16ED8773BF120B29*>
{
public:
	::MoleMole::UIHollowMainPageController* Field_5_1; // 0x30
	::Class_2_A8B97606E71328D6* Field_5_3; // 0x38
	::Class_1_2EF69FD7F867E7F6* Field_5_2; // 0x40
	::System::Boolean Field_5_0; // 0x48

	::System::Void _ctor(::Class_1_11A58A840528E5B2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_11A58A840528E5B2*))((::PBYTE)hIl2Cpp + CLASS_5_A2DD7434967B6CD8__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_5_E9A575D18A0748D9(::Class_1_2EF69FD7F867E7F6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2EF69FD7F867E7F6*))((::PBYTE)hIl2Cpp + CLASS_5_A2DD7434967B6CD8_METHOD_5_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_5_E9A575D18A0748D9_1(::Class_1_2EF69FD7F867E7F6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2EF69FD7F867E7F6*))((::PBYTE)hIl2Cpp + CLASS_5_A2DD7434967B6CD8_METHOD_5_E9A575D18A0748D9_1_OFFSET))(this, a1);
	}
};
