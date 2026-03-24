#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_FD349A67543D0D1D_Class_1_AAAB45198E552E40;
namespace MoleMole::Config { class ConfigEntityTimeSlows; }

#define CLASS_1_FD349A67543D0D1D_CLASS_1_A10E43BBD98A12ED_METHOD_1_ACB47CF58D554BE7_OFFSET UNITYSDK_OFFSET(0x92299A0)
#define CLASS_1_FD349A67543D0D1D_CLASS_1_A10E43BBD98A12ED__CTOR_OFFSET UNITYSDK_OFFSET(0x9229990)

inline static constexpr unsigned int Class_1_FD349A67543D0D1D_Class_1_A10E43BBD98A12ED_TypeDefinitionIndex = 57707;

class Class_1_FD349A67543D0D1D_Class_1_A10E43BBD98A12ED : public ::System::Object
{
public:
	::Class_1_FD349A67543D0D1D_Class_1_AAAB45198E552E40* Field_1_1; // 0x10
	::Foundation::AssetPath Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD349A67543D0D1D_CLASS_1_A10E43BBD98A12ED__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_ACB47CF58D554BE7(::MoleMole::Config::ConfigEntityTimeSlows* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityTimeSlows*))((::PBYTE)hIl2Cpp + CLASS_1_FD349A67543D0D1D_CLASS_1_A10E43BBD98A12ED_METHOD_1_ACB47CF58D554BE7_OFFSET))(this, a1);
	}
};
