#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1DB39C120B52CB5D_Class_2_47F94C3827CAB3BB_1;
class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_1DB39C120B52CB5D_METHOD_2_0541B466D90A7C72_OFFSET UNITYSDK_OFFSET(0xAC95030)
#define CLASS_2_1DB39C120B52CB5D_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0xAC95210)
#define CLASS_2_1DB39C120B52CB5D_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xAC95300)
#define CLASS_2_1DB39C120B52CB5D__CTOR_OFFSET UNITYSDK_OFFSET(0xAC952F0)

inline static constexpr unsigned int Class_2_1DB39C120B52CB5D_TypeDefinitionIndex = 61708;

class Class_2_1DB39C120B52CB5D : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::NotificationBadgeEx* Field_2_3; // 0x18
	::Class_2_60DDD9C206686F44* Field_2_2; // 0x20
	::Class_2_0D31A1661D004892<::Class_2_1DB39C120B52CB5D_Class_2_47F94C3827CAB3BB_1*>* Field_2_0; // 0x28
	::Class_2_0D31A1661D004892<::Class_2_1DB39C120B52CB5D_Class_2_47F94C3827CAB3BB_1*>* Field_2_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DB39C120B52CB5D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_0541B466D90A7C72(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1DB39C120B52CB5D_METHOD_2_0541B466D90A7C72_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DB39C120B52CB5D_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1DB39C120B52CB5D_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
