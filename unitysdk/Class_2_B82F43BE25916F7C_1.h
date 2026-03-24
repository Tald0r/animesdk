#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_480FC3B3774489BF.h"
#include "unitysdk/MoleMole/NapAnisotropicSamplingType.h"

namespace MoleMole { class GraphicSettingProfileBase; }
namespace System { class String; }

#define CLASS_2_B82F43BE25916F7C_1_METHOD_2_6424DA16BE1ACD1D_OFFSET UNITYSDK_OFFSET(0xB68ABA0)
#define CLASS_2_B82F43BE25916F7C_1_METHOD_2_90490EC5FDD00E49_OFFSET UNITYSDK_OFFSET(0xB68AB00)
#define CLASS_2_B82F43BE25916F7C_1_METHOD_2_CF27EDB12528CE39_OFFSET UNITYSDK_OFFSET(0xB68A350)
#define CLASS_2_B82F43BE25916F7C_1__CTOR_OFFSET UNITYSDK_OFFSET(0xB68A340)

inline static constexpr unsigned int Class_2_B82F43BE25916F7C_1_TypeDefinitionIndex = 38587;

class Class_2_B82F43BE25916F7C_1 : public ::Class_1_480FC3B3774489BF
{
public:
	::System::Void _ctor(::MoleMole::GraphicSettingProfileBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GraphicSettingProfileBase*))((::PBYTE)hIl2Cpp + CLASS_2_B82F43BE25916F7C_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_CF27EDB12528CE39(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B82F43BE25916F7C_1_METHOD_2_CF27EDB12528CE39_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_2_90490EC5FDD00E49(::MoleMole::NapAnisotropicSamplingType a1)
	{
		return ((::System::Void(*)(::MoleMole::NapAnisotropicSamplingType))((::PBYTE)hIl2Cpp + CLASS_2_B82F43BE25916F7C_1_METHOD_2_90490EC5FDD00E49_OFFSET))(a1);
	}

	::System::Void Method_2_6424DA16BE1ACD1D(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B82F43BE25916F7C_1_METHOD_2_6424DA16BE1ACD1D_OFFSET))(this, a1, a2);
	}
};
