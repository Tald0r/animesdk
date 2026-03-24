#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_2383C6C1B6DFD4E4.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/System/Object.h"

class Class_1_165FBB84936002B9_Class_1_A6C39E38BEC71A8F;
class Class_1_71A741F5D691F2DB;
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_165FBB84936002B9_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x8C14370)
#define CLASS_1_165FBB84936002B9_METHOD_1_0A7C75AE549C5CCF_OFFSET UNITYSDK_OFFSET(0x8C14BD0)
#define CLASS_1_165FBB84936002B9_METHOD_1_241FCB0507EB9FA1_OFFSET UNITYSDK_OFFSET(0x8C15600)
#define CLASS_1_165FBB84936002B9_METHOD_1_2860AB9CDC1DE2D4_OFFSET UNITYSDK_OFFSET(0x8C14720)
#define CLASS_1_165FBB84936002B9_METHOD_1_388700302FEBD48B_OFFSET UNITYSDK_OFFSET(0x8C148F0)
#define CLASS_1_165FBB84936002B9_METHOD_1_3DADF510F6BF9D20_OFFSET UNITYSDK_OFFSET(0x8C15170)
#define CLASS_1_165FBB84936002B9_METHOD_1_85AB083DB95CDF8B_OFFSET UNITYSDK_OFFSET(0x8C152A0)
#define CLASS_1_165FBB84936002B9_METHOD_1_977E1602D1E87B5C_OFFSET UNITYSDK_OFFSET(0x8C14FB0)
#define CLASS_1_165FBB84936002B9_METHOD_1_C6843992E5B2B49B_1_OFFSET UNITYSDK_OFFSET(0x8C14EA0)
#define CLASS_1_165FBB84936002B9_METHOD_1_C6843992E5B2B49B_OFFSET UNITYSDK_OFFSET(0x8C147E0)
#define CLASS_1_165FBB84936002B9_METHOD_1_FEECB9D118FB766E_OFFSET UNITYSDK_OFFSET(0x8C144F0)
#define CLASS_1_165FBB84936002B9_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x8C14410)
#define CLASS_1_165FBB84936002B9__CTOR_OFFSET UNITYSDK_OFFSET(0x8C141E0)

inline static constexpr unsigned int Class_1_165FBB84936002B9_TypeDefinitionIndex = 57547;

class Class_1_165FBB84936002B9 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_71A741F5D691F2DB*>* Field_1_0; // 0x10
	::Class_1_165FBB84936002B9_Class_1_A6C39E38BEC71A8F* Field_1_3; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_71A741F5D691F2DB*>* Field_1_1; // 0x20
	::System::Collections::Generic::Dictionary_2<::Enum_3_2383C6C1B6DFD4E4, ::System::Collections::Generic::List_1<::Class_1_71A741F5D691F2DB*>*>* Field_1_2; // 0x28
	::MoleMole::HollowChessboard::HollowChessboardUID Field_1_4; // 0x30

	::System::Void _ctor(::MoleMole::HollowChessboard::HollowChessboardUID a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CLASS_1_165FBB84936002B9__CTOR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_1_71A741F5D691F2DB*>* GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_1_71A741F5D691F2DB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_165FBB84936002B9_GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_165FBB84936002B9_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}

	::System::Void Method_1_FEECB9D118FB766E(::Class_1_71A741F5D691F2DB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_71A741F5D691F2DB*))((::PBYTE)hIl2Cpp + CLASS_1_165FBB84936002B9_METHOD_1_FEECB9D118FB766E_OFFSET))(this, a1);
	}

	::System::Void Method_1_2860AB9CDC1DE2D4(::MoleMole::HollowChessboard::HollowChessboardUID a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CLASS_1_165FBB84936002B9_METHOD_1_2860AB9CDC1DE2D4_OFFSET))(this, a1);
	}

	::Class_1_71A741F5D691F2DB* Method_1_C6843992E5B2B49B(::System::UInt32 a1)
	{
		return ((::Class_1_71A741F5D691F2DB*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_165FBB84936002B9_METHOD_1_C6843992E5B2B49B_OFFSET))(this, a1);
	}

	::Class_1_71A741F5D691F2DB* Method_1_388700302FEBD48B(::Enum_3_2383C6C1B6DFD4E4 a1)
	{
		return ((::Class_1_71A741F5D691F2DB*(*)(::PVOID, ::Enum_3_2383C6C1B6DFD4E4))((::PBYTE)hIl2Cpp + CLASS_1_165FBB84936002B9_METHOD_1_388700302FEBD48B_OFFSET))(this, a1);
	}

	::System::Void Method_1_0A7C75AE549C5CCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_165FBB84936002B9_METHOD_1_0A7C75AE549C5CCF_OFFSET))(this);
	}

	::Class_1_71A741F5D691F2DB* Method_1_C6843992E5B2B49B_1(::System::UInt32 a1)
	{
		return ((::Class_1_71A741F5D691F2DB*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_165FBB84936002B9_METHOD_1_C6843992E5B2B49B_1_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_1_71A741F5D691F2DB*>* Method_1_977E1602D1E87B5C(::Enum_3_2383C6C1B6DFD4E4 a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_1_71A741F5D691F2DB*>*(*)(::PVOID, ::Enum_3_2383C6C1B6DFD4E4))((::PBYTE)hIl2Cpp + CLASS_1_165FBB84936002B9_METHOD_1_977E1602D1E87B5C_OFFSET))(this, a1);
	}

	::System::Void Method_1_3DADF510F6BF9D20(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_165FBB84936002B9_METHOD_1_3DADF510F6BF9D20_OFFSET))(this, a1);
	}

	::System::Void Method_1_85AB083DB95CDF8B(::Class_1_71A741F5D691F2DB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_71A741F5D691F2DB*))((::PBYTE)hIl2Cpp + CLASS_1_165FBB84936002B9_METHOD_1_85AB083DB95CDF8B_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_71A741F5D691F2DB*>* Method_1_241FCB0507EB9FA1()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_71A741F5D691F2DB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_165FBB84936002B9_METHOD_1_241FCB0507EB9FA1_OFFSET))(this);
	}
};
