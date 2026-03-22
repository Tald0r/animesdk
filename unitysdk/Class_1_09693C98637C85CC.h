#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_11FD83788053949F.h"
#include "unitysdk/Struct_2_11FD83788053949F_1.h"
#include "unitysdk/Struct_2_11FD83788053949F_2.h"
#include "unitysdk/Struct_2_9D710EB85D2302EA.h"
#include "unitysdk/Struct_2_A840136A4E657746_1.h"
#include "unitysdk/Struct_2_A840136A4E657746_3.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::MiniGame::TartarusHounds::View { class ViewEntityGame; }

#define CLASS_1_09693C98637C85CC_METHOD_1_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x5FAD500)
#define CLASS_1_09693C98637C85CC_METHOD_1_749948B663FCCCEF_OFFSET UNITYSDK_OFFSET(0x5FAE2E0)
#define CLASS_1_09693C98637C85CC_METHOD_1_893814ED967AF5E7_OFFSET UNITYSDK_OFFSET(0x5FADAD0)
#define CLASS_1_09693C98637C85CC_METHOD_1_A84CEAF7AFA573B3_OFFSET UNITYSDK_OFFSET(0x5FAEA40)
#define CLASS_1_09693C98637C85CC_METHOD_1_B7592B2BDF345A00_OFFSET UNITYSDK_OFFSET(0x5FAE090)
#define CLASS_1_09693C98637C85CC_METHOD_1_E62CC8F545D31375_OFFSET UNITYSDK_OFFSET(0x5FAED20)
#define CLASS_1_09693C98637C85CC_METHOD_1_FE8534065DD0DB46_OFFSET UNITYSDK_OFFSET(0x5FADFA0)
#define CLASS_1_09693C98637C85CC__CTOR_OFFSET UNITYSDK_OFFSET(0x5FADD70)

inline static constexpr unsigned int Class_1_09693C98637C85CC_TypeDefinitionIndex = 55222;

class Class_1_09693C98637C85CC : public ::System::Object
{
public:
	::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame* Field_1_0; // 0x10
	::Struct_2_9D710EB85D2302EA Field_1_1; // 0x18
	::Struct_2_11FD83788053949F Field_1_6; // 0x24
	::Struct_2_A840136A4E657746_1 Field_1_3; // 0x30
	::Struct_2_A840136A4E657746_3 Field_1_7; // 0x3C
	::System::Single Field_1_9; // 0x48
	::Struct_2_11FD83788053949F_1 Field_1_5; // 0x4C
	::Struct_2_11FD83788053949F_2 Field_1_4; // 0x58
	::System::Single Field_1_8; // 0x64
	::System::Boolean Field_1_2; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09693C98637C85CC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09693C98637C85CC_METHOD_1_28EB11670A8E5A86_OFFSET))(this);
	}

	::System::Void Method_1_893814ED967AF5E7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_09693C98637C85CC_METHOD_1_893814ED967AF5E7_OFFSET))(this, a1);
	}

	::System::Void Method_1_FE8534065DD0DB46(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_09693C98637C85CC_METHOD_1_FE8534065DD0DB46_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_B7592B2BDF345A00()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09693C98637C85CC_METHOD_1_B7592B2BDF345A00_OFFSET))(this);
	}

	::System::Void Method_1_A84CEAF7AFA573B3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09693C98637C85CC_METHOD_1_A84CEAF7AFA573B3_OFFSET))(this);
	}

	::System::Boolean Method_1_E62CC8F545D31375()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09693C98637C85CC_METHOD_1_E62CC8F545D31375_OFFSET))(this);
	}

	::System::Void Method_1_749948B663FCCCEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09693C98637C85CC_METHOD_1_749948B663FCCCEF_OFFSET))(this);
	}
};
