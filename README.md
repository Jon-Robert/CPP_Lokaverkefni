# CPP_Lokaverkefni FORR3CG05DU (1)
Jón Róbert Árnason 

----------------------------------------------------------------------------------------------------------------------------------------
                                                          Verkefnalýsing                                                          
----------------------------------------------------------------------------------------------------------------------------------------
MainUI Class------------------------------------------------------------------------------------------------------------------------------------------------------------
	MainUI();
	void bookingUI();
        	void startUI();
        	LinkedList* orderList(LinkedList* list,LinkedList* list2);
        	LinkedList* list;

MainUI býr til instance af LinkedList klasanum sem heldur utan um listann
BookingUI er user interface fyrir bókunina sjálfa, hvaða tegund þú velur, og þetta fall fyllir upp í sérhæfðar upplýsingar hverrar tegundar af ferð fyrir sig sem MainBooking gat ekki
startUI er upphafsmyndin
orderList er misheppnuð tilraun til að endurraða listanum eftir stafrofsröð(kommentaði út það sem olli villu svo þetta virkar partially)
list er bara declaration af listanum
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

MainBooking Class -------------------------------------------------------------------------------------------------------------------------------------------------
Klasi fullur af declaration af breytum eins og nöfnum, adress og fleira
Einn klasi(PrintOrder) sem prentar út þessar basic upplýsingar
Einn klasi (Booking) sem tekur upplýsingar allar basic upplysingar(má gera bil, til þess er getline() fallið[im amazing])
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Plane/Bus/CruiseBooking Class --------------------------------------------------------------------------------------------------------------------------------
Eiga allt sameiginlegt að erfa MainBooking klasann og þeir eru allir með 4 föll hver, að velja destination og svo sæti/klefa 
Síðan eru allir með það sem privatebreytur svo að allir klasarnir eru með get() föll til að nota það í öðrum klösum
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

LinkedList Class ------------------------------------------------------------------------------------------------------------------------------------------------------
	LinkedList();
                int length;
        	Node* head;
        	void addP(PlaneBooking pb);
        	void addB(BusBooking bb);
        	void addC(CruiseBooking cb);
        	void print();
Þessi klasi eru pínu bootstrap LinkedList en hann byrjar á constructor sem gerir head sem NULL og length 0
head er nóða sem bendír á fremstu og hún bendir svo á næstu fyrir aftan sig og koll af kolli. Fyrsta nóðan sem er declareuð bendir á NULL í next(sjá Node klasa)
addP býr til nóðu sem inniheldur PlaneBooking instance
addB býr til nóðu sem inniheldur BusBooking instance
addC býr til nóðu sem inniheldur CruiseBooking instance
print prentar út allan listann

------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Node class --------------------------------------------------------------------------------------------------------------------------------------------------------------
  public:
        Node(PlaneBooking pb, int number);
        Node(BusBooking bb, int number);
        Node(CruiseBooking cb, int number);
        Node* next;
        PlaneBooking PB;
        BusBooking BB;
        CruiseBooking CB;
        char getType();
        int getNumber();
    private:
        char type;
        int _number;
Örugglega flóknasta nóða jarðar en jæja
3 constructors, allur til að búa til mismunandu nóðu hvort sem það er Plane, Bus eða Cruise og ef eitt er valið þá verður ekki til instance af hinu tvennu
Next bendir á nóðuna fyrir aftan sig
getType skilar hvers konar nóða þetta er('P','B','C')
getNumber() skila númerinu á henni



