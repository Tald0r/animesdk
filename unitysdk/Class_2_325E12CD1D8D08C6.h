#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_325E12CD1D8D08C6_Class_2_7AA7F2EE83FD2D2F;
class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_325E12CD1D8D08C6_METHOD_2_37917191637BFFF4_OFFSET UNITYSDK_OFFSET(0xCF47FB0)
#define CLASS_2_325E12CD1D8D08C6_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0xCF48140)
#define CLASS_2_325E12CD1D8D08C6_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xCF48210)
#define CLASS_2_325E12CD1D8D08C6__CTOR_OFFSET UNITYSDK_OFFSET(0xCF48200)

inline static constexpr unsigned int Class_2_325E12CD1D8D08C6_TypeDefinitionIndex = 75033;

class Class_2_325E12CD1D8D08C6 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_0D31A1661D004892<::Class_2_325E12CD1D8D08C6_Class_2_7AA7F2EE83FD2D2F*>* Field_2_1; // 0x18
	::Class_2_0D31A1661D004892<::Class_2_325E12CD1D8D08C6_Class_2_7AA7F2EE83FD2D2F*>* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_325E12CD1D8D08C6__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_37917191637BFFF4(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_325E12CD1D8D08C6_METHOD_2_37917191637BFFF4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_325E12CD1D8D08C6_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_325E12CD1D8D08C6_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
