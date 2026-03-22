#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_1DA734EA3AAF759A_Class_1_78C94C2A2718E176;
namespace MoleMole::Config { class ConfigInteractEntry; }

#define CLASS_1_1DA734EA3AAF759A_CLASS_1_45CC628C4F5F5DAB_METHOD_1_E9DAFDEA6724C6A9_OFFSET UNITYSDK_OFFSET(0xB41E170)
#define CLASS_1_1DA734EA3AAF759A_CLASS_1_45CC628C4F5F5DAB__CTOR_OFFSET UNITYSDK_OFFSET(0xB41E160)

inline static constexpr unsigned int Class_1_1DA734EA3AAF759A_Class_1_45CC628C4F5F5DAB_TypeDefinitionIndex = 55901;

class Class_1_1DA734EA3AAF759A_Class_1_45CC628C4F5F5DAB : public ::System::Object
{
public:
	::Class_1_1DA734EA3AAF759A_Class_1_78C94C2A2718E176* Field_1_1; // 0x10
	::Foundation::AssetPath Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DA734EA3AAF759A_CLASS_1_45CC628C4F5F5DAB__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E9DAFDEA6724C6A9(::MoleMole::Config::ConfigInteractEntry* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigInteractEntry*))((::PBYTE)hIl2Cpp + CLASS_1_1DA734EA3AAF759A_CLASS_1_45CC628C4F5F5DAB_METHOD_1_E9DAFDEA6724C6A9_OFFSET))(this, a1);
	}
};
