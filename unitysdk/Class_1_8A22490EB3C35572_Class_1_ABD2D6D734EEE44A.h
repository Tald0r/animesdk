#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/EAvatarSkillType.h"
#include "unitysdk/System/Object.h"

class Class_1_8A22490EB3C35572_Class_1_3605A5AEF6D60147;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_8A22490EB3C35572_CLASS_1_ABD2D6D734EEE44A_METHOD_1_098A817C6CF938BC_OFFSET UNITYSDK_OFFSET(0x144724B0)
#define CLASS_1_8A22490EB3C35572_CLASS_1_ABD2D6D734EEE44A__CTOR_OFFSET UNITYSDK_OFFSET(0x14472420)

inline static constexpr unsigned int Class_1_8A22490EB3C35572_Class_1_ABD2D6D734EEE44A_TypeDefinitionIndex = 12228;

class Class_1_8A22490EB3C35572_Class_1_ABD2D6D734EEE44A : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Share::EAvatarSkillType, ::Class_1_8A22490EB3C35572_Class_1_3605A5AEF6D60147*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A22490EB3C35572_CLASS_1_ABD2D6D734EEE44A__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::Share::EAvatarSkillType, ::Class_1_8A22490EB3C35572_Class_1_3605A5AEF6D60147*>* Method_1_098A817C6CF938BC()
	{
		return ((::System::Collections::Generic::Dictionary_2<::Share::EAvatarSkillType, ::Class_1_8A22490EB3C35572_Class_1_3605A5AEF6D60147*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A22490EB3C35572_CLASS_1_ABD2D6D734EEE44A_METHOD_1_098A817C6CF938BC_OFFSET))(this);
	}
};
