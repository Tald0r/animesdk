#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C4CB11A2FD957208_Struct_2_0CBD995A0EAC9829.h"
#include "unitysdk/Class_1_C4CB11A2FD957208_Struct_2_6175284CFEF73564.h"
#include "unitysdk/Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00.h"
#include "unitysdk/Class_1_C4CB11A2FD957208_Struct_2_E71A4E719BBCD0AD.h"
#include "unitysdk/Enum_3_3A1DCD22526CC6D0.h"
#include "unitysdk/Enum_3_4A563BC3F782542A.h"
#include "unitysdk/Enum_3_96F6662CA3713095_10.h"
#include "unitysdk/Struct_2_C2C4FAC151E77BCA.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0D6706375CDAAE8C;
class Class_2_208CC9941471731A_53;
class Class_3_10F339609BE79763_1;
class Class_3_1A345EAE5F749316_5;
class Class_3_E54D0DE062FD8194;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T1, typename T2> class Class_1_D4CCA64101A9C471;
template <typename T> class Class_1_4109B64C3CE1B638;

#define CLASS_1_C4CB11A2FD957208_METHOD_1_00616F708E82E0A1_OFFSET UNITYSDK_OFFSET(0xB335820)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_03BFDB1C3240A55A_OFFSET UNITYSDK_OFFSET(0xB334C00)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_069D35236ADDB56F_OFFSET UNITYSDK_OFFSET(0xB335C60)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_18EB0FBB40445558_OFFSET UNITYSDK_OFFSET(0xB3376A0)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_379E1C91C966369C_OFFSET UNITYSDK_OFFSET(0xB333DF0)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_40CBBF52249861D3_OFFSET UNITYSDK_OFFSET(0xB332FC0)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_464ADDFAC17B9FA4_OFFSET UNITYSDK_OFFSET(0xB333D20)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_4AF88A6C3AAF4835_OFFSET UNITYSDK_OFFSET(0xB337B50)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_54C2C0BD9BE0B7D8_OFFSET UNITYSDK_OFFSET(0xB3330C0)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_5957498A6751A6F6_OFFSET UNITYSDK_OFFSET(0xB337220)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_5970203F82A878BF_OFFSET UNITYSDK_OFFSET(0xB331C40)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_7AFC0F5D0BABB447_OFFSET UNITYSDK_OFFSET(0xB333570)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_7DD14D09625C520E_OFFSET UNITYSDK_OFFSET(0xB335E80)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_7DDD777C13DD1288_OFFSET UNITYSDK_OFFSET(0xB334E80)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_83A6BD0346DDF639_OFFSET UNITYSDK_OFFSET(0xB3334C0)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_8C0BA32FC960EDC9_OFFSET UNITYSDK_OFFSET(0xB333370)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_A2DE18DA90CF1F41_OFFSET UNITYSDK_OFFSET(0xB332750)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_AFEC71BB1371D9CF_OFFSET UNITYSDK_OFFSET(0xB331AA0)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_B9C57699C1B45791_OFFSET UNITYSDK_OFFSET(0xB335B90)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_BAEA97D0B659484E_OFFSET UNITYSDK_OFFSET(0xB334A40)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_BC9E468D27AA3ACC_OFFSET UNITYSDK_OFFSET(0xB336650)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_C2C42CE1288BEC1F_OFFSET UNITYSDK_OFFSET(0xB3373A0)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_C67098AB660F69DE_OFFSET UNITYSDK_OFFSET(0xB336420)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_C94687E95DDFA271_OFFSET UNITYSDK_OFFSET(0xB332680)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_D24F5FD68E1D9C92_OFFSET UNITYSDK_OFFSET(0xB336FE0)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_E41318BA1295EAF2_OFFSET UNITYSDK_OFFSET(0xB3329F0)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_E97DEACAA0C524BA_OFFSET UNITYSDK_OFFSET(0xB336F00)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_F286BB6AB4BD9A20_OFFSET UNITYSDK_OFFSET(0xB334560)
#define CLASS_1_C4CB11A2FD957208_METHOD_1_FB16F2BBA114A18E_OFFSET UNITYSDK_OFFSET(0xB3366F0)
#define CLASS_1_C4CB11A2FD957208__CCTOR_OFFSET UNITYSDK_OFFSET(0xB3317B0)

inline static constexpr unsigned int Class_1_C4CB11A2FD957208_TypeDefinitionIndex = 43982;

class Class_1_C4CB11A2FD957208 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C4CB11A2FD957208_TypeDefinitionIndex)->GetStaticField(0x3CD50);
	}
	static ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>** StaticGet_Field_1_4()
	{
		return (::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C4CB11A2FD957208_TypeDefinitionIndex)->GetStaticField(0x3CD58);
	}
	static ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>** StaticGet_Field_1_5()
	{
		return (::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C4CB11A2FD957208_TypeDefinitionIndex)->GetStaticField(0x3CD60);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C4CB11A2FD957208_TypeDefinitionIndex)->GetStaticField(0x3CD68);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>** StaticGet_Field_1_8()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C4CB11A2FD957208_TypeDefinitionIndex)->GetStaticField(0x3CD70);
	}
	static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_Field_1_3()
	{
		return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C4CB11A2FD957208_TypeDefinitionIndex)->GetStaticField(0x3CD78);
	}
	static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_Field_1_9()
	{
		return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C4CB11A2FD957208_TypeDefinitionIndex)->GetStaticField(0x3CD80);
	}
	static ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>** StaticGet_Field_1_6()
	{
		return (::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C4CB11A2FD957208_TypeDefinitionIndex)->GetStaticField(0x3CD88);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C4CB11A2FD957208_TypeDefinitionIndex)->GetStaticField(0x3CD90);
	}
	static ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>** StaticGet_Field_1_7()
	{
		return (::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C4CB11A2FD957208_TypeDefinitionIndex)->GetStaticField(0x3CD98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_AFEC71BB1371D9CF(::System::Int32 a1, ::MoleMole::Battle::Entity* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_AFEC71BB1371D9CF_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* Method_1_C94687E95DDFA271(::System::Nullable_1<::System::Int32> a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* a4)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*(*)(::System::Nullable_1<::System::Int32>, ::System::Int32, ::System::Boolean, ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_C94687E95DDFA271_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_E41318BA1295EAF2(::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* a1, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*& a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*&))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_E41318BA1295EAF2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_40CBBF52249861D3(::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::Class_2_208CC9941471731A_53*, ::System::Int32>>* a1, ::MoleMole::Battle::Entity* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::Class_2_208CC9941471731A_53*, ::System::Int32>>*, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_40CBBF52249861D3_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* Method_1_83A6BD0346DDF639(::Class_1_D4CCA64101A9C471<::System::UInt32, ::Class_3_1A345EAE5F749316_5*>* a1, ::System::Boolean a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*(*)(::Class_1_D4CCA64101A9C471<::System::UInt32, ::Class_3_1A345EAE5F749316_5*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_83A6BD0346DDF639_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* Method_1_464ADDFAC17B9FA4(::System::Nullable_1<::System::Int32> a1, ::System::Boolean a2, ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* a3)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*(*)(::System::Nullable_1<::System::Int32>, ::System::Boolean, ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_464ADDFAC17B9FA4_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_379E1C91C966369C(::System::Collections::Generic::List_1<::Class_1_4109B64C3CE1B638<::Class_3_10F339609BE79763_1*>*>* a1, ::System::Func_2<::Class_3_10F339609BE79763_1*, ::Class_1_0D6706375CDAAE8C*>* a2, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* a3, ::Class_1_C4CB11A2FD957208_Struct_2_E71A4E719BBCD0AD& a4)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_1_4109B64C3CE1B638<::Class_3_10F339609BE79763_1*>*>*, ::System::Func_2<::Class_3_10F339609BE79763_1*, ::Class_1_0D6706375CDAAE8C*>*, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*, ::Class_1_C4CB11A2FD957208_Struct_2_E71A4E719BBCD0AD&))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_379E1C91C966369C_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Int32 Method_1_BAEA97D0B659484E(::Class_1_0D6706375CDAAE8C* a1, ::Class_1_0D6706375CDAAE8C* a2)
	{
		return ((::System::Int32(*)(::Class_1_0D6706375CDAAE8C*, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_BAEA97D0B659484E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7DDD777C13DD1288(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_E54D0DE062FD8194*>* a1, ::MoleMole::Battle::Entity* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_E54D0DE062FD8194*>*, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_7DDD777C13DD1288_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_B9C57699C1B45791(::System::Collections::Generic::KeyValuePair_2<::Class_2_208CC9941471731A_53*, ::System::Int32> a1, ::System::Int32& a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::KeyValuePair_2<::Class_2_208CC9941471731A_53*, ::System::Int32>, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_B9C57699C1B45791_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_069D35236ADDB56F(::System::String*& a1, ::System::Int32& a2)
	{
		return ((::System::String*(*)(::System::String*&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_069D35236ADDB56F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7DD14D09625C520E(::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_7DD14D09625C520E_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* Method_1_F286BB6AB4BD9A20(::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* a1, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* a2, ::System::Collections::Generic::IList_1<::Enum_3_3A1DCD22526CC6D0>* a3)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*(*)(::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*, ::System::Collections::Generic::IList_1<::Enum_3_3A1DCD22526CC6D0>*))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_F286BB6AB4BD9A20_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_03BFDB1C3240A55A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_03BFDB1C3240A55A_OFFSET))();
	}

	static ::System::Void Method_1_C67098AB660F69DE(::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_0CBD995A0EAC9829>* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_0CBD995A0EAC9829>*, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_C67098AB660F69DE_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_1_00616F708E82E0A1(::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_0CBD995A0EAC9829>* a1, ::MoleMole::Battle::Entity* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_0CBD995A0EAC9829>*, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_00616F708E82E0A1_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* Method_1_BC9E468D27AA3ACC(::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*(*)(::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_BC9E468D27AA3ACC_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_E97DEACAA0C524BA(::System::Int32& a1, ::Enum_3_96F6662CA3713095_10& a2, ::System::String*& a3)
	{
		return ((::System::Boolean(*)(::System::Int32&, ::Enum_3_96F6662CA3713095_10&, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_E97DEACAA0C524BA_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* Method_1_FB16F2BBA114A18E(::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*(*)(::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_FB16F2BBA114A18E_OFFSET))(a1);
	}

	static ::System::Void Method_1_8C0BA32FC960EDC9(::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::Class_2_208CC9941471731A_53*, ::System::Int32>>* a1, ::Class_1_C4CB11A2FD957208_Struct_2_6175284CFEF73564 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::Class_2_208CC9941471731A_53*, ::System::Int32>>*, ::Class_1_C4CB11A2FD957208_Struct_2_6175284CFEF73564, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_8C0BA32FC960EDC9_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_5970203F82A878BF(::System::Collections::Generic::List_1<::Class_3_E54D0DE062FD8194*>* a1, ::MoleMole::Battle::Entity* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_3_E54D0DE062FD8194*>*, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_5970203F82A878BF_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_0D6706375CDAAE8C* Method_1_5957498A6751A6F6(::Class_3_10F339609BE79763_1* a1, ::Enum_3_4A563BC3F782542A a2)
	{
		return ((::Class_1_0D6706375CDAAE8C*(*)(::Class_3_10F339609BE79763_1*, ::Enum_3_4A563BC3F782542A))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_5957498A6751A6F6_OFFSET))(a1, a2);
	}

	static ::Class_1_C4CB11A2FD957208_Struct_2_6175284CFEF73564 Method_1_54C2C0BD9BE0B7D8(::MoleMole::Battle::Entity* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::Class_1_C4CB11A2FD957208_Struct_2_6175284CFEF73564(*)(::MoleMole::Battle::Entity*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_54C2C0BD9BE0B7D8_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* Method_1_C2C42CE1288BEC1F(::System::Nullable_1<::System::Int32> a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* a3, ::System::Boolean a4)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*(*)(::System::Nullable_1<::System::Int32>, ::System::Int32, ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_C2C42CE1288BEC1F_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* Method_1_7AFC0F5D0BABB447(::Class_1_D4CCA64101A9C471<::System::UInt32, ::Class_3_1A345EAE5F749316_5*>* a1, ::System::Boolean a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*(*)(::Class_1_D4CCA64101A9C471<::System::UInt32, ::Class_3_1A345EAE5F749316_5*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_7AFC0F5D0BABB447_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_18EB0FBB40445558(::Struct_2_C2C4FAC151E77BCA& a1, ::System::Boolean& a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::Struct_2_C2C4FAC151E77BCA&, ::System::Boolean&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_18EB0FBB40445558_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_D24F5FD68E1D9C92(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::Class_2_208CC9941471731A_53*, ::System::Int32>>* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::Class_2_208CC9941471731A_53*, ::System::Int32>>*, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_D24F5FD68E1D9C92_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* Method_1_4AF88A6C3AAF4835(::System::Nullable_1<::System::Int32> a1, ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* a2, ::System::Boolean a3)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*(*)(::System::Nullable_1<::System::Int32>, ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_4AF88A6C3AAF4835_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* Method_1_A2DE18DA90CF1F41(::System::Nullable_1<::System::Int32> a1, ::System::Nullable_1<::System::Int32> a2, ::System::Boolean a3, ::System::Int32 a4, ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* a5, ::System::Boolean a6)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*(*)(::System::Nullable_1<::System::Int32>, ::System::Nullable_1<::System::Int32>, ::System::Boolean, ::System::Int32, ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C4CB11A2FD957208_METHOD_1_A2DE18DA90CF1F41_OFFSET))(a1, a2, a3, a4, a5, a6);
	}
};
